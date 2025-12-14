#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)174;
unsigned char var_3 = (unsigned char)178;
unsigned char var_4 = (unsigned char)12;
signed char var_5 = (signed char)-66;
unsigned char var_9 = (unsigned char)48;
unsigned char var_11 = (unsigned char)192;
signed char var_12 = (signed char)-94;
int zero = 0;
unsigned char var_15 = (unsigned char)230;
unsigned char var_16 = (unsigned char)24;
unsigned char var_17 = (unsigned char)91;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
