#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 13373280203455874070ULL;
signed char var_8 = (signed char)-66;
unsigned short var_9 = (unsigned short)62271;
unsigned char var_12 = (unsigned char)183;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned char var_19 = (unsigned char)255;
unsigned int var_20 = 1854740327U;
unsigned int var_21 = 2462197657U;
unsigned long long int var_22 = 17676286805663171872ULL;
unsigned int var_23 = 37338416U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
