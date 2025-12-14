#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 8920775204019996694LL;
unsigned short var_14 = (unsigned short)44977;
unsigned char var_16 = (unsigned char)236;
unsigned long long int var_19 = 17326435789139852412ULL;
int zero = 0;
long long int var_20 = -1069271100469089384LL;
short var_21 = (short)-898;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
