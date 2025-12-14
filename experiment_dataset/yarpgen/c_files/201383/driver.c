#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-13043;
unsigned char var_3 = (unsigned char)244;
short var_4 = (short)-15048;
unsigned short var_5 = (unsigned short)55398;
unsigned char var_8 = (unsigned char)112;
unsigned char var_9 = (unsigned char)116;
unsigned short var_10 = (unsigned short)41535;
unsigned short var_11 = (unsigned short)38969;
int zero = 0;
short var_12 = (short)19629;
unsigned char var_13 = (unsigned char)129;
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
