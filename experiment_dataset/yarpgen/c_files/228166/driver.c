#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 10999150973958800995ULL;
unsigned char var_5 = (unsigned char)137;
unsigned char var_13 = (unsigned char)29;
int zero = 0;
short var_16 = (short)-29663;
unsigned char var_17 = (unsigned char)102;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
