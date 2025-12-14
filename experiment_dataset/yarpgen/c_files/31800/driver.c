#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)9303;
unsigned int var_3 = 3481505147U;
unsigned int var_4 = 3124858121U;
unsigned short var_5 = (unsigned short)48467;
unsigned short var_6 = (unsigned short)21795;
signed char var_7 = (signed char)10;
signed char var_17 = (signed char)37;
int zero = 0;
short var_18 = (short)2099;
unsigned char var_19 = (unsigned char)187;
void init() {
}

void checksum() {
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
