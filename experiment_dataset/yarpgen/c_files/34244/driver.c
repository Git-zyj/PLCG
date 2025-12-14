#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2316946495335336161LL;
unsigned int var_2 = 2032983025U;
unsigned int var_15 = 2032122726U;
unsigned char var_17 = (unsigned char)173;
int zero = 0;
int var_19 = 946556398;
unsigned long long int var_20 = 1180058045374226784ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
