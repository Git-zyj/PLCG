#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1075811620U;
unsigned int var_1 = 1105912365U;
_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)0;
unsigned char var_5 = (unsigned char)164;
_Bool var_6 = (_Bool)1;
long long int var_8 = -327400893481598002LL;
unsigned short var_9 = (unsigned short)14401;
unsigned int var_11 = 4029440420U;
int zero = 0;
unsigned char var_12 = (unsigned char)234;
signed char var_13 = (signed char)38;
_Bool var_14 = (_Bool)0;
int var_15 = 1909618157;
unsigned int var_16 = 4154703521U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
