#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_1 = (signed char)-14;
unsigned int var_2 = 44041194U;
_Bool var_4 = (_Bool)0;
unsigned char var_8 = (unsigned char)244;
int var_9 = -331981462;
unsigned int var_10 = 2952039103U;
_Bool var_13 = (_Bool)1;
unsigned char var_15 = (unsigned char)33;
signed char var_16 = (signed char)-87;
_Bool var_17 = (_Bool)1;
int zero = 0;
short var_20 = (short)-4691;
int var_21 = -969022760;
int var_22 = -1049203;
signed char var_23 = (signed char)-45;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
