#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)12804;
unsigned short var_6 = (unsigned short)5969;
unsigned long long int var_12 = 14104395821125794771ULL;
int zero = 0;
unsigned long long int var_17 = 1155078745383134925ULL;
long long int var_18 = -4635272234219982311LL;
unsigned long long int var_19 = 16578757625061043695ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
