#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)245;
unsigned char var_1 = (unsigned char)178;
_Bool var_5 = (_Bool)0;
unsigned char var_7 = (unsigned char)2;
unsigned char var_10 = (unsigned char)49;
int var_11 = -1882176624;
unsigned long long int var_13 = 1400463237088890277ULL;
long long int var_14 = -3202513041007752434LL;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)38072;
signed char var_17 = (signed char)-38;
int var_18 = 1911819729;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
