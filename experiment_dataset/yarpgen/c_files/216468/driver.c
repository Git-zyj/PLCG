#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
unsigned long long int var_5 = 8903286998064759481ULL;
unsigned long long int var_6 = 16092637128279225030ULL;
unsigned char var_8 = (unsigned char)75;
_Bool var_9 = (_Bool)1;
signed char var_11 = (signed char)-24;
unsigned long long int var_12 = 15151856145130959994ULL;
short var_13 = (short)-16243;
_Bool var_14 = (_Bool)0;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)52;
signed char var_18 = (signed char)42;
int zero = 0;
short var_19 = (short)18475;
unsigned long long int var_20 = 2635958405576256944ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
