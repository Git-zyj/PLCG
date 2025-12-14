#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)14101;
short var_3 = (short)-4767;
int var_4 = -1346573704;
unsigned short var_5 = (unsigned short)35537;
_Bool var_6 = (_Bool)0;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)-62;
unsigned char var_16 = (unsigned char)48;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 2204999241U;
unsigned int var_19 = 1159061042U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
