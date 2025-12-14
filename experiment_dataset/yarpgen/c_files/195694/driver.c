#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_2 = (unsigned short)8199;
unsigned int var_4 = 3789950563U;
int var_5 = -748467695;
unsigned short var_7 = (unsigned short)51100;
short var_9 = (short)-11095;
int var_10 = -1290108853;
_Bool var_11 = (_Bool)0;
long long int var_12 = -8447260571516015710LL;
int var_14 = 532896132;
int zero = 0;
unsigned long long int var_17 = 5568262069766664245ULL;
unsigned short var_18 = (unsigned short)25749;
unsigned long long int var_19 = 14322151551982993165ULL;
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
