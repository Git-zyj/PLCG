#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-6410;
unsigned int var_7 = 2872695667U;
unsigned int var_12 = 3277110868U;
_Bool var_13 = (_Bool)0;
int zero = 0;
signed char var_15 = (signed char)-12;
short var_16 = (short)-18318;
signed char var_17 = (signed char)30;
unsigned long long int var_18 = 3046377413512092051ULL;
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
