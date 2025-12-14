#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 2387664633920685985ULL;
unsigned short var_6 = (unsigned short)53370;
int var_7 = -1041415202;
unsigned short var_8 = (unsigned short)28598;
int zero = 0;
unsigned long long int var_10 = 8202757663645573629ULL;
int var_11 = 392132426;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
