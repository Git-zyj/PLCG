#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)22106;
unsigned int var_5 = 4023799300U;
unsigned char var_7 = (unsigned char)99;
unsigned long long int var_8 = 928196229233259519ULL;
unsigned char var_11 = (unsigned char)126;
int zero = 0;
unsigned char var_17 = (unsigned char)184;
unsigned long long int var_18 = 5026987510738038163ULL;
unsigned short var_19 = (unsigned short)12984;
unsigned short var_20 = (unsigned short)59937;
signed char var_21 = (signed char)-83;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
