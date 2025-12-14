#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)101;
signed char var_3 = (signed char)-126;
short var_4 = (short)-28548;
unsigned int var_8 = 2400460530U;
unsigned char var_11 = (unsigned char)51;
int zero = 0;
unsigned short var_13 = (unsigned short)45964;
unsigned int var_14 = 495564694U;
unsigned short var_15 = (unsigned short)18507;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
