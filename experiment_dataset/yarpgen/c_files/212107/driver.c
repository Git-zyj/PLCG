#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)95;
unsigned char var_5 = (unsigned char)128;
unsigned int var_10 = 1282801394U;
int var_11 = -284683660;
int zero = 0;
short var_12 = (short)-12662;
int var_13 = -1603233033;
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
