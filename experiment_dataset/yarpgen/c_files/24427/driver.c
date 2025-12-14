#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3433575853U;
short var_1 = (short)-16587;
int var_3 = 1270444214;
unsigned char var_5 = (unsigned char)98;
signed char var_13 = (signed char)55;
int zero = 0;
unsigned int var_15 = 2658626712U;
unsigned short var_16 = (unsigned short)4012;
unsigned long long int var_17 = 2152673189769736622ULL;
unsigned char var_18 = (unsigned char)230;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
