#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)109;
unsigned int var_3 = 780076186U;
unsigned int var_5 = 417037131U;
int var_11 = -119665359;
int zero = 0;
unsigned long long int var_15 = 13665295258131629856ULL;
unsigned char var_16 = (unsigned char)255;
void init() {
}

void checksum() {
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
