#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4975796010026087228ULL;
long long int var_3 = 1577935095446315237LL;
unsigned short var_6 = (unsigned short)11847;
int zero = 0;
int var_11 = 2048538509;
unsigned int var_12 = 2345896875U;
void init() {
}

void checksum() {
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
