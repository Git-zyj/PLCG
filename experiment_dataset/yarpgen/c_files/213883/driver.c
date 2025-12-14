#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)2767;
unsigned char var_6 = (unsigned char)19;
unsigned short var_7 = (unsigned short)10242;
short var_11 = (short)-25297;
int zero = 0;
int var_12 = 1851708258;
unsigned int var_13 = 1731192988U;
unsigned int var_14 = 3882677413U;
short var_15 = (short)4626;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
