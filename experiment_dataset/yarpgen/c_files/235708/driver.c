#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 865144390;
unsigned char var_5 = (unsigned char)234;
signed char var_7 = (signed char)-75;
long long int var_8 = -663734335247426151LL;
signed char var_14 = (signed char)-70;
unsigned char var_15 = (unsigned char)69;
signed char var_17 = (signed char)-40;
unsigned char var_18 = (unsigned char)201;
int zero = 0;
signed char var_20 = (signed char)-14;
unsigned int var_21 = 3510031391U;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
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
