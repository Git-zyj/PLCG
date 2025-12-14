#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1930358518784725629ULL;
unsigned short var_3 = (unsigned short)64509;
long long int var_8 = 2920772272327684261LL;
unsigned int var_16 = 29661646U;
signed char var_17 = (signed char)33;
int var_18 = 58481839;
int zero = 0;
int var_20 = -1651473836;
unsigned int var_21 = 4219002991U;
unsigned char var_22 = (unsigned char)227;
signed char var_23 = (signed char)3;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
