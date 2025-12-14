#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-28976;
unsigned short var_3 = (unsigned short)53010;
unsigned char var_5 = (unsigned char)45;
unsigned long long int var_7 = 14703989542555515143ULL;
unsigned short var_13 = (unsigned short)56794;
int zero = 0;
unsigned short var_15 = (unsigned short)46397;
unsigned char var_16 = (unsigned char)253;
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
