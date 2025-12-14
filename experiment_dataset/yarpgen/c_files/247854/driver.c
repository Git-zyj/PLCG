#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-27409;
unsigned short var_3 = (unsigned short)42862;
unsigned short var_8 = (unsigned short)23346;
short var_12 = (short)-23945;
unsigned short var_19 = (unsigned short)31319;
int zero = 0;
short var_20 = (short)-11268;
unsigned short var_21 = (unsigned short)19331;
unsigned short var_22 = (unsigned short)30894;
short var_23 = (short)25852;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
