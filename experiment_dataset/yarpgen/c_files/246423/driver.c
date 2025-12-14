#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -210044165;
signed char var_3 = (signed char)-2;
unsigned long long int var_5 = 18257743677290322539ULL;
_Bool var_6 = (_Bool)0;
_Bool var_8 = (_Bool)1;
unsigned int var_12 = 1530117081U;
unsigned char var_17 = (unsigned char)113;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 1647056562U;
unsigned long long int var_22 = 4291705535923107219ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
