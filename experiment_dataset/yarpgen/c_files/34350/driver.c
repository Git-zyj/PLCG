#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)1;
unsigned int var_4 = 129617451U;
_Bool var_6 = (_Bool)1;
unsigned int var_7 = 3412275806U;
unsigned int var_8 = 3396363277U;
unsigned int var_10 = 1570552060U;
short var_11 = (short)-13479;
short var_13 = (short)3830;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 1720863741U;
unsigned int var_17 = 2908364547U;
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
