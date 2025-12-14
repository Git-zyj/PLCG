#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 4358513241713772813ULL;
unsigned short var_4 = (unsigned short)26031;
unsigned short var_5 = (unsigned short)17251;
unsigned long long int var_6 = 16992505196387828191ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)47409;
unsigned short var_12 = (unsigned short)51484;
unsigned char var_13 = (unsigned char)70;
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
