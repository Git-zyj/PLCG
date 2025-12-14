#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-22285;
signed char var_2 = (signed char)123;
unsigned char var_6 = (unsigned char)218;
int zero = 0;
unsigned short var_10 = (unsigned short)3499;
unsigned char var_11 = (unsigned char)199;
unsigned char var_12 = (unsigned char)27;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
