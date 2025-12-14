#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = 183071850;
int var_8 = -1157429171;
_Bool var_12 = (_Bool)1;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned int var_20 = 318514837U;
signed char var_21 = (signed char)-92;
int var_22 = -1737330695;
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
