#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)4;
unsigned int var_8 = 212360816U;
unsigned int var_10 = 482365784U;
int var_12 = -1291211023;
int var_14 = -1595990256;
unsigned int var_16 = 4163706916U;
int zero = 0;
short var_17 = (short)-22827;
unsigned short var_18 = (unsigned short)54165;
unsigned char var_19 = (unsigned char)80;
unsigned short var_20 = (unsigned short)55686;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
