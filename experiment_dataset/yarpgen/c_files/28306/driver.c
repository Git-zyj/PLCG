#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -779974067;
long long int var_2 = 5208587111601179681LL;
long long int var_3 = 1846104462453459427LL;
unsigned long long int var_4 = 12722605334306331715ULL;
unsigned char var_5 = (unsigned char)186;
long long int var_8 = 3347486604678006195LL;
unsigned char var_10 = (unsigned char)247;
int zero = 0;
int var_11 = -1568138809;
long long int var_12 = 4510376252755600271LL;
long long int var_13 = 2763291515926382957LL;
long long int var_14 = -8753982008420422786LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
