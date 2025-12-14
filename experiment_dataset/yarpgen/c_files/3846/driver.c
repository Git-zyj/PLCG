#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)35369;
unsigned short var_2 = (unsigned short)51043;
unsigned char var_3 = (unsigned char)70;
unsigned short var_7 = (unsigned short)19403;
unsigned char var_9 = (unsigned char)160;
unsigned char var_10 = (unsigned char)48;
unsigned short var_11 = (unsigned short)63952;
unsigned short var_13 = (unsigned short)61759;
unsigned char var_17 = (unsigned char)113;
int zero = 0;
unsigned char var_19 = (unsigned char)139;
unsigned short var_20 = (unsigned short)46207;
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
