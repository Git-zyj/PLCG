#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned short var_4 = (unsigned short)15806;
int var_5 = -1665764653;
int var_8 = 124081656;
short var_11 = (short)-15856;
unsigned long long int var_12 = 8341909105966574485ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)184;
int var_15 = -1378670184;
unsigned char var_16 = (unsigned char)247;
unsigned short var_17 = (unsigned short)12859;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
