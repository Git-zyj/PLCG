#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16540368280703304574ULL;
unsigned short var_1 = (unsigned short)23626;
unsigned short var_2 = (unsigned short)6978;
unsigned char var_13 = (unsigned char)205;
unsigned int var_14 = 1747366944U;
int zero = 0;
unsigned int var_15 = 2298641933U;
unsigned short var_16 = (unsigned short)35441;
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
