#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
short var_2 = (short)28670;
short var_4 = (short)2759;
short var_5 = (short)-29400;
unsigned short var_6 = (unsigned short)6247;
signed char var_7 = (signed char)-49;
int zero = 0;
unsigned int var_10 = 1441662911U;
unsigned char var_11 = (unsigned char)4;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
