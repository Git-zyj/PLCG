#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 5453600825214883065ULL;
long long int var_4 = 8136201906253206785LL;
unsigned long long int var_6 = 16083386413158962195ULL;
long long int var_7 = -8992187535573493930LL;
unsigned long long int var_10 = 9801247332355866936ULL;
unsigned short var_11 = (unsigned short)53733;
unsigned short var_12 = (unsigned short)20855;
long long int var_13 = 7747236545819530256LL;
long long int var_14 = -239839288913036820LL;
int zero = 0;
long long int var_15 = -6605061257936322474LL;
unsigned long long int var_16 = 7307366259447651440ULL;
void init() {
}

void checksum() {
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
