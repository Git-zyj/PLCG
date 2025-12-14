#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
signed char var_4 = (signed char)8;
unsigned int var_5 = 2762270295U;
unsigned short var_6 = (unsigned short)17252;
_Bool var_14 = (_Bool)0;
unsigned short var_17 = (unsigned short)57720;
int zero = 0;
int var_19 = 1360411568;
int var_20 = 1002603136;
unsigned int var_21 = 2978491532U;
unsigned long long int var_22 = 8756331684955199242ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
