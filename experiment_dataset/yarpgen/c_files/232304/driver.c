#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)16332;
unsigned long long int var_3 = 4956111109772122098ULL;
unsigned long long int var_6 = 8960975513186588911ULL;
unsigned long long int var_8 = 1783979271223291128ULL;
_Bool var_10 = (_Bool)1;
unsigned long long int var_12 = 117690139406807694ULL;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned char var_17 = (unsigned char)159;
short var_18 = (short)17623;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
