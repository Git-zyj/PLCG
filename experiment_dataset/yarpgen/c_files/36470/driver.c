#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 226746275U;
signed char var_5 = (signed char)63;
unsigned char var_9 = (unsigned char)247;
unsigned char var_12 = (unsigned char)149;
int zero = 0;
unsigned char var_13 = (unsigned char)236;
unsigned long long int var_14 = 17594647028151370437ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
