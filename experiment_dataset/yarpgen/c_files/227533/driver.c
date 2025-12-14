#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -424905695;
unsigned char var_2 = (unsigned char)32;
unsigned int var_4 = 2251272308U;
unsigned char var_8 = (unsigned char)10;
unsigned int var_10 = 473238160U;
unsigned short var_11 = (unsigned short)8819;
unsigned char var_12 = (unsigned char)115;
unsigned short var_13 = (unsigned short)46493;
unsigned char var_14 = (unsigned char)181;
unsigned char var_15 = (unsigned char)22;
int zero = 0;
unsigned char var_20 = (unsigned char)79;
unsigned int var_21 = 2433299411U;
unsigned char var_22 = (unsigned char)224;
short var_23 = (short)-15536;
unsigned char var_24 = (unsigned char)254;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
