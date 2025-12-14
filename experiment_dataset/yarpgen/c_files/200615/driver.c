#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)40871;
unsigned char var_9 = (unsigned char)138;
unsigned char var_10 = (unsigned char)211;
unsigned short var_14 = (unsigned short)7396;
int zero = 0;
unsigned short var_19 = (unsigned short)64882;
unsigned int var_20 = 3090362547U;
unsigned char var_21 = (unsigned char)117;
unsigned char var_22 = (unsigned char)127;
unsigned char var_23 = (unsigned char)249;
unsigned int var_24 = 3518550980U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
