#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 14611775881743551597ULL;
unsigned short var_12 = (unsigned short)28166;
int zero = 0;
unsigned char var_14 = (unsigned char)204;
unsigned char var_15 = (unsigned char)128;
unsigned char var_16 = (unsigned char)19;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
