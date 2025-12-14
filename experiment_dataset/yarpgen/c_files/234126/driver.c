#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)180;
long long int var_1 = 4178900488554081537LL;
unsigned int var_3 = 987579865U;
unsigned short var_6 = (unsigned short)65084;
int zero = 0;
unsigned char var_11 = (unsigned char)252;
unsigned short var_12 = (unsigned short)62699;
short var_13 = (short)1701;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
