#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1900140754;
short var_6 = (short)1207;
unsigned int var_8 = 283183331U;
int zero = 0;
unsigned short var_10 = (unsigned short)64769;
short var_11 = (short)18826;
unsigned long long int var_12 = 5401647157141213687ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
