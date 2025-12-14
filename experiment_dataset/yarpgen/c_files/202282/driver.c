#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-12353;
unsigned short var_3 = (unsigned short)51717;
unsigned char var_5 = (unsigned char)110;
unsigned char var_6 = (unsigned char)32;
unsigned char var_10 = (unsigned char)142;
int zero = 0;
unsigned long long int var_14 = 1816195210049371781ULL;
unsigned char var_15 = (unsigned char)192;
void init() {
}

void checksum() {
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
