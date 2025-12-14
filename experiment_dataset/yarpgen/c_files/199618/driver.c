#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)182;
unsigned char var_1 = (unsigned char)46;
unsigned short var_2 = (unsigned short)12976;
unsigned char var_6 = (unsigned char)77;
unsigned short var_7 = (unsigned short)61593;
unsigned short var_13 = (unsigned short)35294;
int zero = 0;
unsigned short var_14 = (unsigned short)2420;
unsigned short var_15 = (unsigned short)65528;
unsigned short var_16 = (unsigned short)19762;
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
