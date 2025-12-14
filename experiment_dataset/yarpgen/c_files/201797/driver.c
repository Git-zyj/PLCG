#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)12;
short var_2 = (short)-414;
unsigned short var_3 = (unsigned short)37020;
unsigned long long int var_4 = 13242056184591858439ULL;
unsigned char var_5 = (unsigned char)14;
signed char var_8 = (signed char)21;
short var_10 = (short)3366;
unsigned int var_14 = 2204764059U;
int zero = 0;
unsigned char var_15 = (unsigned char)189;
unsigned short var_16 = (unsigned short)23175;
unsigned int var_17 = 4088424299U;
int var_18 = -935343611;
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
