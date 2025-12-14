#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 795053421;
int var_2 = 1368442846;
long long int var_5 = -5296053260063639085LL;
int zero = 0;
int var_13 = -84302289;
long long int var_14 = 978401683595643824LL;
unsigned char var_15 = (unsigned char)167;
long long int var_16 = -7811887708445426156LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
