#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned long long int var_4 = 12185776666653240188ULL;
unsigned int var_5 = 2579056157U;
unsigned short var_6 = (unsigned short)1715;
unsigned long long int var_7 = 17106414189938241491ULL;
_Bool var_12 = (_Bool)1;
unsigned int var_15 = 1464228998U;
_Bool var_16 = (_Bool)0;
int zero = 0;
_Bool var_18 = (_Bool)0;
int var_19 = 1630128727;
unsigned short var_20 = (unsigned short)3110;
unsigned char var_21 = (unsigned char)176;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
