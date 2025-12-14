#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)4979;
signed char var_3 = (signed char)-75;
unsigned short var_9 = (unsigned short)8516;
short var_13 = (short)-25948;
unsigned int var_14 = 323268319U;
int zero = 0;
short var_15 = (short)-3986;
short var_16 = (short)10861;
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
