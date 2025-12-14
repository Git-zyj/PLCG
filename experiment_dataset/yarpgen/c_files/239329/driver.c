#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_1 = (signed char)102;
short var_2 = (short)24924;
unsigned int var_4 = 570085553U;
int var_6 = 1004855935;
long long int var_7 = -582490510219718872LL;
_Bool var_8 = (_Bool)1;
unsigned int var_9 = 3606198681U;
unsigned int var_10 = 591825142U;
unsigned short var_11 = (unsigned short)17898;
int zero = 0;
unsigned int var_12 = 2391044245U;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
