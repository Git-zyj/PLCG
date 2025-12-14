#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-1273;
unsigned int var_5 = 991627904U;
unsigned char var_6 = (unsigned char)20;
signed char var_8 = (signed char)109;
unsigned char var_11 = (unsigned char)32;
int zero = 0;
unsigned short var_12 = (unsigned short)24588;
signed char var_13 = (signed char)48;
void init() {
}

void checksum() {
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
