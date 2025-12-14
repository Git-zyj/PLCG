#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_3 = (short)-3097;
signed char var_5 = (signed char)-19;
short var_6 = (short)-16613;
int var_7 = 875526122;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 1819563478U;
unsigned int var_10 = 486566258U;
int var_11 = -1461559349;
int zero = 0;
short var_13 = (short)-7745;
unsigned long long int var_14 = 12432473530784936394ULL;
short var_15 = (short)-19633;
unsigned int var_16 = 542350323U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
