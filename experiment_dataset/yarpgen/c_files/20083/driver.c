#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_3 = 296554959U;
unsigned int var_4 = 701570885U;
unsigned int var_5 = 2180620172U;
_Bool var_6 = (_Bool)1;
unsigned int var_7 = 3349487297U;
unsigned int var_8 = 3250198571U;
_Bool var_9 = (_Bool)1;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 3996150236U;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 3754621809U;
unsigned int var_15 = 2605459499U;
unsigned int var_16 = 3892956232U;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
