#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)128;
unsigned char var_5 = (unsigned char)103;
int zero = 0;
long long int var_11 = -7960904876495186368LL;
short var_12 = (short)-24886;
int var_13 = 730506511;
unsigned int var_14 = 112702348U;
unsigned int var_15 = 1039766145U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
