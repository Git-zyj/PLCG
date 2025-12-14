#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned short var_4 = (unsigned short)24120;
signed char var_7 = (signed char)-6;
unsigned long long int var_8 = 13512235070683230046ULL;
unsigned char var_17 = (unsigned char)238;
int zero = 0;
signed char var_18 = (signed char)-15;
unsigned short var_19 = (unsigned short)39774;
signed char var_20 = (signed char)65;
unsigned char var_21 = (unsigned char)231;
unsigned int var_22 = 1431730078U;
_Bool var_23 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
