#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -840942837;
unsigned char var_2 = (unsigned char)88;
unsigned char var_6 = (unsigned char)131;
int zero = 0;
unsigned short var_12 = (unsigned short)63255;
unsigned char var_13 = (unsigned char)183;
short var_14 = (short)-5409;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
