#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2598188332U;
unsigned char var_3 = (unsigned char)13;
unsigned long long int var_9 = 14619036527353840035ULL;
int zero = 0;
short var_13 = (short)19140;
unsigned int var_14 = 1798202919U;
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
