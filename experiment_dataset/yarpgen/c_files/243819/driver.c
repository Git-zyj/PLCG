#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 440187097U;
long long int var_1 = 5280671708104480937LL;
int var_3 = -1328634530;
unsigned long long int var_7 = 1029873673201141299ULL;
_Bool var_11 = (_Bool)0;
unsigned char var_13 = (unsigned char)142;
_Bool var_14 = (_Bool)1;
unsigned char var_17 = (unsigned char)162;
int zero = 0;
unsigned int var_18 = 2388849800U;
unsigned int var_19 = 3037170418U;
void init() {
}

void checksum() {
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
