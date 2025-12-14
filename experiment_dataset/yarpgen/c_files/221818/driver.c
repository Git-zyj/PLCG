#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)123;
signed char var_3 = (signed char)-6;
unsigned int var_5 = 690902948U;
unsigned char var_6 = (unsigned char)216;
signed char var_10 = (signed char)-64;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 2601790549U;
int zero = 0;
unsigned char var_13 = (unsigned char)68;
unsigned int var_14 = 4059713048U;
unsigned char var_15 = (unsigned char)253;
short var_16 = (short)-15934;
short var_17 = (short)11845;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
