#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_1 = 3014796783U;
unsigned int var_7 = 2309378801U;
unsigned long long int var_10 = 1142315149799043415ULL;
unsigned short var_11 = (unsigned short)24061;
unsigned short var_12 = (unsigned short)48341;
int zero = 0;
unsigned int var_13 = 2901741827U;
short var_14 = (short)-21297;
void init() {
}

void checksum() {
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
