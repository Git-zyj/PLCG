#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 354398614U;
int var_3 = 764072123;
short var_5 = (short)-29160;
unsigned char var_6 = (unsigned char)254;
unsigned short var_8 = (unsigned short)16239;
unsigned short var_9 = (unsigned short)41252;
int zero = 0;
unsigned long long int var_11 = 17033817986528065074ULL;
signed char var_12 = (signed char)50;
unsigned long long int var_13 = 475772256455019359ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
