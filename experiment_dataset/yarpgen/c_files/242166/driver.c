#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 645664422;
unsigned char var_3 = (unsigned char)48;
unsigned int var_8 = 1922837986U;
short var_18 = (short)-5257;
int zero = 0;
unsigned short var_20 = (unsigned short)52244;
short var_21 = (short)-23926;
void init() {
}

void checksum() {
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
