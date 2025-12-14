#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)55681;
short var_2 = (short)19552;
unsigned char var_5 = (unsigned char)243;
unsigned char var_6 = (unsigned char)234;
unsigned char var_7 = (unsigned char)104;
unsigned char var_8 = (unsigned char)246;
unsigned char var_9 = (unsigned char)192;
unsigned short var_10 = (unsigned short)21082;
int zero = 0;
short var_12 = (short)13592;
unsigned char var_13 = (unsigned char)243;
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
