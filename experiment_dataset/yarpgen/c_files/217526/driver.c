#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 3390891121U;
short var_7 = (short)-7077;
unsigned int var_10 = 2508955108U;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned int var_14 = 2083814617U;
short var_15 = (short)14945;
short var_16 = (short)11065;
void init() {
}

void checksum() {
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
