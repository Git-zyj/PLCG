#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3843378824U;
unsigned short var_1 = (unsigned short)50455;
unsigned char var_6 = (unsigned char)97;
unsigned char var_9 = (unsigned char)76;
int zero = 0;
short var_10 = (short)-4651;
short var_11 = (short)24829;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
