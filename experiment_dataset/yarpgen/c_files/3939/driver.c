#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10927035669398598520ULL;
unsigned char var_2 = (unsigned char)41;
unsigned short var_4 = (unsigned short)9053;
unsigned short var_5 = (unsigned short)49201;
long long int var_6 = 5656318652968380950LL;
unsigned long long int var_8 = 12551368236984375808ULL;
int zero = 0;
unsigned char var_10 = (unsigned char)115;
unsigned char var_11 = (unsigned char)253;
unsigned long long int var_12 = 615088852209832509ULL;
short var_13 = (short)-32107;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
