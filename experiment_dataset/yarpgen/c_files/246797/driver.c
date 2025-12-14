#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-22993;
long long int var_2 = -3931814928183334764LL;
short var_5 = (short)24305;
long long int var_11 = -1524288446941358468LL;
unsigned char var_12 = (unsigned char)93;
int zero = 0;
short var_13 = (short)12524;
unsigned char var_14 = (unsigned char)92;
unsigned char var_15 = (unsigned char)59;
long long int var_16 = 8116132335420609005LL;
short var_17 = (short)-32425;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
