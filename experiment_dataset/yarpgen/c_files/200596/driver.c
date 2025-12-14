#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)10126;
_Bool var_5 = (_Bool)1;
unsigned long long int var_6 = 13789247779130548256ULL;
unsigned int var_7 = 3968962735U;
unsigned int var_8 = 4208092376U;
unsigned char var_9 = (unsigned char)213;
unsigned short var_12 = (unsigned short)11009;
int zero = 0;
unsigned char var_13 = (unsigned char)244;
int var_14 = 1112813033;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
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
