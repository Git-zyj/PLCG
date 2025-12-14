#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-2187;
short var_5 = (short)-12152;
unsigned char var_8 = (unsigned char)3;
unsigned short var_15 = (unsigned short)28336;
int zero = 0;
unsigned char var_18 = (unsigned char)249;
unsigned long long int var_19 = 8565607371317872803ULL;
signed char var_20 = (signed char)5;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
