#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)91;
unsigned short var_4 = (unsigned short)54729;
unsigned int var_5 = 3843294049U;
int var_11 = -1194643758;
_Bool var_13 = (_Bool)1;
int var_14 = 1220934749;
int var_16 = 2117180713;
unsigned short var_17 = (unsigned short)43214;
int zero = 0;
unsigned long long int var_20 = 2378272465311975326ULL;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
