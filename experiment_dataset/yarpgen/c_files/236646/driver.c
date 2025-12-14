#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned int var_6 = 4286280842U;
_Bool var_10 = (_Bool)0;
unsigned int var_13 = 2801013332U;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned int var_16 = 2166782249U;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 3224648923U;
unsigned int var_20 = 1823610125U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
