#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)45;
_Bool var_7 = (_Bool)1;
short var_10 = (short)-13125;
long long int var_11 = -4350295736015145550LL;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned int var_16 = 1620404759U;
short var_17 = (short)6324;
void init() {
}

void checksum() {
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
