#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)128;
unsigned char var_3 = (unsigned char)95;
unsigned char var_4 = (unsigned char)69;
unsigned char var_6 = (unsigned char)114;
short var_7 = (short)-2894;
int zero = 0;
short var_15 = (short)11705;
short var_16 = (short)-10541;
short var_17 = (short)20609;
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
