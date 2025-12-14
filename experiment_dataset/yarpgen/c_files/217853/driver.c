#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3466722171U;
short var_4 = (short)-13775;
unsigned long long int var_5 = 11369456942784049628ULL;
int var_7 = 1153882511;
unsigned char var_13 = (unsigned char)149;
int zero = 0;
unsigned int var_15 = 1887895704U;
int var_16 = -2018536751;
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
