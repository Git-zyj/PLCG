#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1023944141;
unsigned char var_1 = (unsigned char)6;
short var_4 = (short)23179;
unsigned int var_5 = 2819614813U;
short var_8 = (short)26727;
int zero = 0;
unsigned short var_17 = (unsigned short)44007;
unsigned char var_18 = (unsigned char)85;
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
