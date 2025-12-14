#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-23365;
unsigned int var_4 = 2571448245U;
long long int var_8 = -3464432036762950222LL;
int zero = 0;
unsigned int var_11 = 52322401U;
unsigned char var_12 = (unsigned char)7;
short var_13 = (short)16536;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
