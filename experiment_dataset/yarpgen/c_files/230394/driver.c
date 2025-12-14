#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)88;
_Bool var_1 = (_Bool)0;
unsigned int var_2 = 2719796927U;
_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)0;
short var_5 = (short)-21034;
int var_6 = 2049043648;
unsigned int var_8 = 3970829981U;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)12747;
int zero = 0;
long long int var_12 = 2876860188010469618LL;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 10671864174611173161ULL;
int var_15 = -768130571;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
