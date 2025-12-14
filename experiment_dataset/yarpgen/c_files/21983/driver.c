#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3644709924U;
unsigned long long int var_3 = 3014069895920779125ULL;
unsigned char var_4 = (unsigned char)193;
unsigned char var_10 = (unsigned char)22;
int zero = 0;
int var_15 = 412544094;
unsigned int var_16 = 3610291264U;
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
