#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_5 = (short)19478;
short var_7 = (short)-30825;
short var_12 = (short)-23943;
unsigned short var_13 = (unsigned short)7340;
int zero = 0;
unsigned short var_16 = (unsigned short)44695;
unsigned long long int var_17 = 2522534497166329485ULL;
int var_18 = 1716484268;
void init() {
}

void checksum() {
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
