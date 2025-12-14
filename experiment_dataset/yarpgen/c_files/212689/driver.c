#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_1 = 2240112110U;
_Bool var_7 = (_Bool)0;
unsigned int var_14 = 3998482773U;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned int var_20 = 197349304U;
_Bool var_21 = (_Bool)0;
short var_22 = (short)-29761;
_Bool var_23 = (_Bool)1;
short var_24 = (short)24968;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
