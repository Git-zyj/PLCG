#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14296006305281048793ULL;
unsigned long long int var_6 = 14691093719401585997ULL;
unsigned short var_9 = (unsigned short)42925;
signed char var_10 = (signed char)118;
unsigned short var_11 = (unsigned short)48729;
_Bool var_12 = (_Bool)1;
unsigned long long int var_17 = 4197405787382986818ULL;
short var_18 = (short)-11890;
int zero = 0;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)-42;
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
