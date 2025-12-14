#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-28174;
int var_4 = -1281602969;
int var_6 = 149966674;
long long int var_17 = 5683110881822976661LL;
int zero = 0;
signed char var_20 = (signed char)85;
unsigned char var_21 = (unsigned char)90;
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
