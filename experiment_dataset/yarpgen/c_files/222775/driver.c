#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_1 = (unsigned char)29;
short var_2 = (short)-5319;
long long int var_5 = 8408084489427478856LL;
int var_6 = -729499620;
long long int var_7 = -4079749652578083931LL;
short var_11 = (short)-14687;
short var_12 = (short)4209;
unsigned long long int var_13 = 4423710924591431910ULL;
int zero = 0;
unsigned int var_15 = 1717729369U;
unsigned int var_16 = 3767370719U;
unsigned long long int var_17 = 10445618895149127340ULL;
signed char var_18 = (signed char)-86;
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
