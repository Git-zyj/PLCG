#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2290765560U;
unsigned long long int var_2 = 10375447600596177886ULL;
long long int var_4 = 236282790630565025LL;
short var_8 = (short)11294;
unsigned char var_10 = (unsigned char)190;
int zero = 0;
unsigned char var_12 = (unsigned char)246;
long long int var_13 = -6992674177503799708LL;
long long int var_14 = 3397722704233639339LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
