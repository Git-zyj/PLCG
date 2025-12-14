#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)25558;
short var_7 = (short)-27313;
short var_8 = (short)14417;
short var_9 = (short)-32037;
unsigned short var_10 = (unsigned short)34998;
short var_11 = (short)24383;
int zero = 0;
unsigned short var_12 = (unsigned short)30641;
unsigned char var_13 = (unsigned char)5;
short var_14 = (short)2372;
short var_15 = (short)-16165;
short var_16 = (short)9641;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
