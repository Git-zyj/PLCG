#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1226589949;
unsigned char var_4 = (unsigned char)142;
unsigned short var_7 = (unsigned short)19165;
unsigned long long int var_9 = 12286788131986669856ULL;
int zero = 0;
unsigned long long int var_11 = 13267990159016987758ULL;
signed char var_12 = (signed char)115;
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
