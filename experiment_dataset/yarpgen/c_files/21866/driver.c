#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2526869363U;
_Bool var_1 = (_Bool)0;
unsigned long long int var_2 = 3310710133291503007ULL;
unsigned int var_8 = 640461366U;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned short var_12 = (unsigned short)5113;
short var_13 = (short)-14532;
unsigned long long int var_14 = 17780310006104217276ULL;
unsigned int var_15 = 579443124U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
