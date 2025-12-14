#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)4114;
int var_3 = 1852572671;
int var_7 = 844311122;
unsigned int var_10 = 1826329778U;
int zero = 0;
short var_11 = (short)-14770;
signed char var_12 = (signed char)19;
long long int var_13 = -8697202281223950950LL;
unsigned int var_14 = 2944178758U;
unsigned char var_15 = (unsigned char)96;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
