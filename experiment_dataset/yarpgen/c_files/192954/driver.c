#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)0;
int var_9 = 2004011043;
unsigned char var_11 = (unsigned char)63;
unsigned char var_12 = (unsigned char)10;
int zero = 0;
short var_16 = (short)-18255;
unsigned char var_17 = (unsigned char)13;
unsigned char var_18 = (unsigned char)129;
void init() {
}

void checksum() {
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
