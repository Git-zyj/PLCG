#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-16299;
unsigned int var_2 = 2125559504U;
unsigned short var_13 = (unsigned short)65243;
int zero = 0;
signed char var_14 = (signed char)-22;
unsigned int var_15 = 2465718168U;
unsigned long long int var_16 = 15283984738157721994ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
