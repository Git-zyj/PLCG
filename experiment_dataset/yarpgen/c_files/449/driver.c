#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_2 = (short)-14648;
unsigned long long int var_3 = 12984395147435348376ULL;
unsigned short var_4 = (unsigned short)30562;
int var_5 = -653723230;
short var_14 = (short)18965;
int zero = 0;
unsigned long long int var_15 = 16237426558475963520ULL;
unsigned int var_16 = 3148910554U;
signed char var_17 = (signed char)118;
void init() {
}

void checksum() {
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
