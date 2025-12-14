#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2316957841U;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 145270582U;
_Bool var_7 = (_Bool)1;
long long int var_10 = 7727073789847089647LL;
int zero = 0;
unsigned int var_13 = 3812490822U;
unsigned short var_14 = (unsigned short)39327;
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
