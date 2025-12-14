#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16438117738474523497ULL;
unsigned char var_5 = (unsigned char)227;
unsigned short var_8 = (unsigned short)39615;
int zero = 0;
unsigned char var_11 = (unsigned char)112;
unsigned char var_12 = (unsigned char)34;
void init() {
}

void checksum() {
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
