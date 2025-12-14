#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-30690;
unsigned long long int var_4 = 1376425020155703447ULL;
long long int var_10 = 8023540814055656506LL;
unsigned short var_14 = (unsigned short)59236;
int zero = 0;
long long int var_15 = 2108737502035814673LL;
short var_16 = (short)13480;
int var_17 = -665250981;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
