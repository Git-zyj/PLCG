#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)73;
unsigned long long int var_4 = 6932536517981482813ULL;
_Bool var_5 = (_Bool)1;
unsigned int var_10 = 1968055621U;
short var_12 = (short)25933;
signed char var_13 = (signed char)99;
int zero = 0;
unsigned char var_18 = (unsigned char)249;
unsigned char var_19 = (unsigned char)158;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
