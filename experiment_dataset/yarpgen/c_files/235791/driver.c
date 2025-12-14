#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1390328533U;
unsigned long long int var_2 = 6606526254525051875ULL;
unsigned int var_4 = 3540585344U;
signed char var_5 = (signed char)106;
int zero = 0;
short var_11 = (short)2128;
unsigned long long int var_12 = 12917365758700805940ULL;
unsigned int var_13 = 664668026U;
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
