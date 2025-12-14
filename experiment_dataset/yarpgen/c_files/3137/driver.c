#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-9161;
unsigned int var_4 = 4226381581U;
unsigned char var_5 = (unsigned char)252;
signed char var_7 = (signed char)65;
unsigned int var_10 = 3593870497U;
int zero = 0;
unsigned long long int var_12 = 2755748313266088224ULL;
short var_13 = (short)32173;
short var_14 = (short)-32676;
void init() {
}

void checksum() {
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
