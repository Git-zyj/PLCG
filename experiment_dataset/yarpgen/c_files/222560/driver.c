#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_8 = (unsigned short)50450;
short var_9 = (short)-30350;
unsigned short var_10 = (unsigned short)41408;
int var_12 = 1897181333;
int zero = 0;
unsigned char var_16 = (unsigned char)27;
int var_17 = 1037357074;
void init() {
}

void checksum() {
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
