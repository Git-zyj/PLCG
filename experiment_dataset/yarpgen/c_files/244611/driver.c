#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1946689063;
short var_3 = (short)-15672;
_Bool var_5 = (_Bool)0;
int var_6 = 1139842870;
int var_8 = 2104974661;
unsigned char var_12 = (unsigned char)148;
int zero = 0;
unsigned char var_15 = (unsigned char)48;
unsigned char var_16 = (unsigned char)204;
unsigned short var_17 = (unsigned short)10020;
int var_18 = 1129889317;
unsigned char var_19 = (unsigned char)200;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
