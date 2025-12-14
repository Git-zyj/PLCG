#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 788441989938196256ULL;
signed char var_3 = (signed char)-92;
unsigned long long int var_5 = 930535053736675853ULL;
unsigned short var_8 = (unsigned short)55555;
unsigned char var_10 = (unsigned char)10;
unsigned short var_11 = (unsigned short)17438;
int zero = 0;
unsigned char var_18 = (unsigned char)49;
signed char var_19 = (signed char)-61;
unsigned char var_20 = (unsigned char)11;
unsigned char var_21 = (unsigned char)90;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
