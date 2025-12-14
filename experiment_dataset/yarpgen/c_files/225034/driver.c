#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-7723;
signed char var_5 = (signed char)-53;
unsigned int var_7 = 1865415696U;
unsigned int var_8 = 111171465U;
unsigned char var_10 = (unsigned char)177;
unsigned char var_11 = (unsigned char)186;
int zero = 0;
unsigned short var_14 = (unsigned short)36300;
unsigned char var_15 = (unsigned char)69;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
