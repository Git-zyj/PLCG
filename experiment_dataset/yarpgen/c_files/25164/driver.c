#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 813573553;
short var_1 = (short)456;
unsigned int var_2 = 540415141U;
unsigned long long int var_3 = 9809444046803140625ULL;
unsigned int var_4 = 3318120256U;
unsigned long long int var_5 = 8967593139829796495ULL;
int zero = 0;
short var_10 = (short)-10811;
long long int var_11 = 459996167799473444LL;
unsigned short var_12 = (unsigned short)41388;
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
