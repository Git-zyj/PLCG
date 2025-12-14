#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2442366106U;
signed char var_15 = (signed char)-27;
unsigned long long int var_17 = 2906298074539556708ULL;
int zero = 0;
unsigned long long int var_19 = 17431162364321154056ULL;
unsigned int var_20 = 1865708496U;
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
