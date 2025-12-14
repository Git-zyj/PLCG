#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 10863286904121306009ULL;
unsigned int var_8 = 2683196140U;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 11359499336303326174ULL;
int var_12 = 738231460;
int zero = 0;
unsigned long long int var_14 = 15867817298075720597ULL;
unsigned long long int var_15 = 16155687198122441543ULL;
unsigned int var_16 = 1517616261U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
