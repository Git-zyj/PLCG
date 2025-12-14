#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)-53;
unsigned char var_14 = (unsigned char)236;
unsigned char var_15 = (unsigned char)115;
unsigned char var_17 = (unsigned char)41;
int zero = 0;
unsigned char var_20 = (unsigned char)31;
short var_21 = (short)-12250;
void init() {
}

void checksum() {
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
