#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 9127717268005957293ULL;
unsigned short var_7 = (unsigned short)409;
short var_13 = (short)-27129;
int zero = 0;
unsigned char var_18 = (unsigned char)208;
unsigned int var_19 = 943437653U;
unsigned char var_20 = (unsigned char)151;
int var_21 = 716452496;
void init() {
}

void checksum() {
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
