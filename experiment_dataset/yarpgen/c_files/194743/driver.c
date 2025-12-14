#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)3;
unsigned int var_4 = 3369473805U;
unsigned long long int var_13 = 8008813063041859553ULL;
unsigned long long int var_15 = 13679134964545577979ULL;
short var_16 = (short)13446;
int zero = 0;
short var_17 = (short)19492;
unsigned char var_18 = (unsigned char)199;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
