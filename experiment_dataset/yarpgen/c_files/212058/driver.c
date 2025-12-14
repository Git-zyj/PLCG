#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2588963589U;
unsigned int var_2 = 166900483U;
unsigned char var_5 = (unsigned char)55;
short var_7 = (short)-30872;
unsigned char var_9 = (unsigned char)174;
unsigned char var_15 = (unsigned char)81;
short var_16 = (short)2011;
int zero = 0;
short var_19 = (short)23837;
short var_20 = (short)-16115;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
