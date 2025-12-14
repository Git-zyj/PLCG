#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_12 = 885692209;
short var_13 = (short)-7097;
unsigned int var_14 = 1155090124U;
int zero = 0;
unsigned short var_15 = (unsigned short)18283;
unsigned char var_16 = (unsigned char)137;
unsigned short var_17 = (unsigned short)40711;
short var_18 = (short)25463;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
