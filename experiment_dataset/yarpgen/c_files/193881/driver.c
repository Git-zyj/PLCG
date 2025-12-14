#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)30861;
short var_5 = (short)-31241;
short var_7 = (short)24106;
unsigned long long int var_8 = 15509038922079640077ULL;
unsigned char var_15 = (unsigned char)2;
int zero = 0;
unsigned char var_18 = (unsigned char)214;
unsigned char var_19 = (unsigned char)143;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
