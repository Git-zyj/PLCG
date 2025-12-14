#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)167;
signed char var_5 = (signed char)-38;
short var_7 = (short)270;
unsigned char var_10 = (unsigned char)17;
unsigned char var_11 = (unsigned char)73;
unsigned char var_12 = (unsigned char)102;
int zero = 0;
short var_15 = (short)27144;
unsigned short var_16 = (unsigned short)27754;
void init() {
}

void checksum() {
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
