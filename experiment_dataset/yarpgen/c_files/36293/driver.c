#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4055038990U;
short var_4 = (short)-24406;
short var_6 = (short)26226;
unsigned int var_8 = 3945085903U;
int zero = 0;
unsigned char var_13 = (unsigned char)236;
unsigned char var_14 = (unsigned char)2;
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
