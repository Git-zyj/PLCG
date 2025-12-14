#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-5876;
unsigned long long int var_2 = 15122732560454224392ULL;
unsigned int var_4 = 819035306U;
long long int var_7 = 1842828843215786968LL;
unsigned long long int var_9 = 2066167463794484978ULL;
int zero = 0;
unsigned int var_12 = 1869905440U;
long long int var_13 = 5642084631666809970LL;
unsigned int var_14 = 3432723147U;
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
