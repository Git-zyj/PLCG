#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2616636914009815763LL;
unsigned int var_2 = 1648885743U;
unsigned int var_3 = 2639474150U;
_Bool var_4 = (_Bool)0;
signed char var_6 = (signed char)-122;
short var_7 = (short)16363;
short var_8 = (short)20223;
unsigned int var_9 = 3041282866U;
unsigned char var_10 = (unsigned char)59;
int zero = 0;
unsigned long long int var_11 = 3165315092359749137ULL;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 485328819U;
_Bool var_14 = (_Bool)0;
short var_15 = (short)5387;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)97;
unsigned int var_18 = 3302805966U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
