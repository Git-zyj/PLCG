#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)21;
unsigned int var_3 = 2046532843U;
unsigned char var_4 = (unsigned char)42;
unsigned short var_5 = (unsigned short)50871;
unsigned int var_8 = 1639667790U;
unsigned short var_10 = (unsigned short)37451;
unsigned short var_11 = (unsigned short)33001;
int zero = 0;
unsigned char var_14 = (unsigned char)10;
unsigned short var_15 = (unsigned short)33134;
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
