#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-6088;
unsigned short var_4 = (unsigned short)32405;
unsigned long long int var_5 = 1872167066532355635ULL;
unsigned short var_7 = (unsigned short)43070;
unsigned short var_11 = (unsigned short)23585;
short var_12 = (short)-26894;
int zero = 0;
unsigned long long int var_14 = 16383212098666288888ULL;
unsigned long long int var_15 = 11973057652889660862ULL;
void init() {
}

void checksum() {
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
