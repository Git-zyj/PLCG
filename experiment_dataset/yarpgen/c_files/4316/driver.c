#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6988646628425664518LL;
unsigned char var_2 = (unsigned char)101;
long long int var_4 = 6582015281880620718LL;
short var_7 = (short)22913;
unsigned int var_8 = 1155055400U;
unsigned int var_11 = 3392211902U;
unsigned long long int var_13 = 18091650519252132749ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)75;
unsigned char var_17 = (unsigned char)7;
unsigned char var_18 = (unsigned char)41;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
