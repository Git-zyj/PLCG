#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)139;
short var_2 = (short)-16936;
signed char var_9 = (signed char)-23;
signed char var_16 = (signed char)-44;
signed char var_17 = (signed char)83;
int zero = 0;
unsigned short var_19 = (unsigned short)61247;
int var_20 = 1867189035;
void init() {
}

void checksum() {
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
