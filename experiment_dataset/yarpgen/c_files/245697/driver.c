#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)158;
unsigned short var_5 = (unsigned short)2205;
unsigned char var_6 = (unsigned char)102;
unsigned int var_7 = 1045504161U;
int zero = 0;
unsigned char var_12 = (unsigned char)40;
unsigned int var_13 = 90273266U;
unsigned char var_14 = (unsigned char)86;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
