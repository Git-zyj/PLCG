#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)-23;
short var_10 = (short)12637;
unsigned char var_17 = (unsigned char)213;
int zero = 0;
unsigned short var_19 = (unsigned short)24779;
short var_20 = (short)-23966;
unsigned char var_21 = (unsigned char)62;
unsigned char var_22 = (unsigned char)202;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
