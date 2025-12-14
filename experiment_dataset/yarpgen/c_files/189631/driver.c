#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)-19329;
unsigned int var_10 = 3133402194U;
short var_16 = (short)508;
int zero = 0;
unsigned long long int var_19 = 2883128757417811711ULL;
unsigned short var_20 = (unsigned short)38935;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
