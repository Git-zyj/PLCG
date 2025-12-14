#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)19607;
int var_6 = 927418292;
short var_8 = (short)-9399;
short var_10 = (short)2807;
int zero = 0;
short var_11 = (short)-19199;
unsigned char var_12 = (unsigned char)113;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
