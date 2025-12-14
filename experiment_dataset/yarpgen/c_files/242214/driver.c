#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)115;
unsigned short var_1 = (unsigned short)25284;
short var_2 = (short)12048;
unsigned short var_4 = (unsigned short)18762;
unsigned char var_6 = (unsigned char)170;
unsigned char var_8 = (unsigned char)31;
unsigned char var_13 = (unsigned char)80;
int zero = 0;
unsigned char var_14 = (unsigned char)65;
unsigned short var_15 = (unsigned short)11678;
unsigned short var_16 = (unsigned short)57768;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
