#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)18392;
unsigned char var_2 = (unsigned char)93;
unsigned char var_9 = (unsigned char)239;
int zero = 0;
unsigned char var_10 = (unsigned char)128;
short var_11 = (short)11714;
unsigned short var_12 = (unsigned short)65229;
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
