#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)52731;
unsigned int var_1 = 3084066199U;
unsigned int var_3 = 3677056572U;
short var_4 = (short)-394;
unsigned long long int var_5 = 10365393934473549314ULL;
unsigned long long int var_7 = 16134204537013343691ULL;
unsigned long long int var_9 = 17862104056648145601ULL;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned int var_11 = 3845287163U;
unsigned int var_12 = 1883915131U;
short var_13 = (short)4999;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
