#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)179;
unsigned long long int var_7 = 12255451760864274367ULL;
int zero = 0;
unsigned char var_11 = (unsigned char)77;
signed char var_12 = (signed char)113;
signed char var_13 = (signed char)-98;
short var_14 = (short)13282;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
