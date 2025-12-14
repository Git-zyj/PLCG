#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 6792419342629581143ULL;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)0;
signed char var_6 = (signed char)87;
unsigned long long int var_9 = 3217535653158893395ULL;
unsigned int var_10 = 1796766429U;
short var_11 = (short)-23390;
_Bool var_12 = (_Bool)0;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)56;
unsigned long long int var_18 = 5073656546175123877ULL;
_Bool var_19 = (_Bool)0;
short var_20 = (short)1204;
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
