#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)31108;
unsigned char var_12 = (unsigned char)161;
signed char var_13 = (signed char)53;
unsigned char var_16 = (unsigned char)145;
int zero = 0;
unsigned char var_17 = (unsigned char)123;
unsigned short var_18 = (unsigned short)6205;
void init() {
}

void checksum() {
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
