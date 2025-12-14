#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)11120;
unsigned int var_2 = 3939901275U;
int var_6 = -235566511;
unsigned long long int var_7 = 5621077114459466543ULL;
unsigned int var_10 = 32900835U;
int zero = 0;
unsigned short var_12 = (unsigned short)40966;
unsigned long long int var_13 = 2063803620659296148ULL;
void init() {
}

void checksum() {
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
