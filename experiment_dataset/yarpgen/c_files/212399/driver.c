#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)46;
unsigned char var_6 = (unsigned char)226;
unsigned char var_10 = (unsigned char)249;
unsigned char var_11 = (unsigned char)216;
unsigned char var_12 = (unsigned char)130;
short var_15 = (short)7167;
unsigned char var_17 = (unsigned char)49;
int zero = 0;
unsigned char var_19 = (unsigned char)113;
short var_20 = (short)-4144;
unsigned char var_21 = (unsigned char)48;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
