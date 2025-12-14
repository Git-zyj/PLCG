#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)18484;
unsigned short var_7 = (unsigned short)8742;
unsigned char var_8 = (unsigned char)236;
signed char var_11 = (signed char)123;
int zero = 0;
int var_15 = -524902268;
unsigned char var_16 = (unsigned char)143;
short var_17 = (short)12208;
int var_18 = 942721660;
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
