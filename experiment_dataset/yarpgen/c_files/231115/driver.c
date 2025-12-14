#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)16;
unsigned int var_4 = 1510910554U;
unsigned long long int var_5 = 11572513780148684541ULL;
unsigned long long int var_6 = 2192010848771621876ULL;
_Bool var_7 = (_Bool)0;
long long int var_11 = 6342904109797153248LL;
int zero = 0;
unsigned char var_14 = (unsigned char)245;
unsigned long long int var_15 = 11242198579374368646ULL;
unsigned long long int var_16 = 5171325430371791560ULL;
unsigned int var_17 = 367007673U;
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
