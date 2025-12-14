#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)31144;
unsigned short var_4 = (unsigned short)8075;
unsigned short var_6 = (unsigned short)10024;
unsigned short var_7 = (unsigned short)46993;
int zero = 0;
int var_12 = 579113636;
short var_13 = (short)-25255;
void init() {
}

void checksum() {
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
