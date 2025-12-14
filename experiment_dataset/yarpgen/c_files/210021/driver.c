#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2975191069U;
unsigned long long int var_3 = 16936083388047685516ULL;
int var_6 = -333341870;
_Bool var_8 = (_Bool)0;
_Bool var_11 = (_Bool)1;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned long long int var_16 = 4066180646988727692ULL;
unsigned int var_17 = 3831949147U;
long long int var_18 = -2823119665694593059LL;
unsigned long long int var_19 = 13862317727438429443ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
