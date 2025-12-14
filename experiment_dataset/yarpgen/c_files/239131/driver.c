#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_9 = 2312498322U;
unsigned int var_10 = 24392567U;
int zero = 0;
unsigned long long int var_13 = 170551887233922904ULL;
unsigned char var_14 = (unsigned char)16;
unsigned char var_15 = (unsigned char)97;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
