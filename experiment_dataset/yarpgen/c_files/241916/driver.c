#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)11206;
unsigned int var_3 = 1188501498U;
unsigned short var_4 = (unsigned short)61800;
unsigned short var_5 = (unsigned short)113;
unsigned short var_7 = (unsigned short)17810;
int zero = 0;
unsigned char var_10 = (unsigned char)56;
unsigned char var_11 = (unsigned char)0;
unsigned char var_12 = (unsigned char)114;
unsigned int var_13 = 4032537985U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
