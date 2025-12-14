#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)-4726;
unsigned char var_7 = (unsigned char)131;
int var_9 = 533066438;
unsigned short var_10 = (unsigned short)17463;
int zero = 0;
short var_11 = (short)-20266;
short var_12 = (short)12724;
unsigned char var_13 = (unsigned char)190;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
