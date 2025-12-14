#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-6428;
int var_4 = -229108362;
unsigned short var_5 = (unsigned short)40469;
unsigned short var_9 = (unsigned short)54642;
unsigned char var_14 = (unsigned char)209;
int zero = 0;
unsigned char var_17 = (unsigned char)104;
unsigned char var_18 = (unsigned char)251;
unsigned short var_19 = (unsigned short)51700;
unsigned char var_20 = (unsigned char)248;
unsigned short var_21 = (unsigned short)30063;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
