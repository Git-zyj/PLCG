#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)246;
_Bool var_6 = (_Bool)0;
unsigned char var_7 = (unsigned char)140;
unsigned long long int var_8 = 11275290051005497159ULL;
_Bool var_9 = (_Bool)1;
unsigned int var_10 = 736580550U;
signed char var_11 = (signed char)64;
int zero = 0;
unsigned int var_15 = 1112270935U;
unsigned long long int var_16 = 13586233832260286365ULL;
unsigned short var_17 = (unsigned short)56200;
unsigned int var_18 = 2491431931U;
signed char var_19 = (signed char)89;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
