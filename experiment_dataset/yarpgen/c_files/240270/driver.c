#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)15;
unsigned char var_5 = (unsigned char)34;
unsigned char var_12 = (unsigned char)213;
int zero = 0;
long long int var_13 = -4734987704436108543LL;
long long int var_14 = -6004129195877156106LL;
unsigned int var_15 = 638590357U;
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
