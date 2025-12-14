#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10517674241062653926ULL;
unsigned char var_1 = (unsigned char)198;
int var_4 = -641877023;
int var_5 = -147440038;
unsigned char var_11 = (unsigned char)30;
short var_12 = (short)24716;
int zero = 0;
unsigned short var_19 = (unsigned short)25284;
unsigned char var_20 = (unsigned char)164;
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
