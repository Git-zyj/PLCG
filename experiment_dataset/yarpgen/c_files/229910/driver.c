#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1771786399;
unsigned char var_10 = (unsigned char)96;
signed char var_11 = (signed char)-81;
int zero = 0;
int var_15 = 1706415543;
unsigned short var_16 = (unsigned short)19298;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
