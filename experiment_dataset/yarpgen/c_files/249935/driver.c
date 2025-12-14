#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 9307923895475712666ULL;
unsigned long long int var_14 = 12254167720312635742ULL;
unsigned short var_15 = (unsigned short)60399;
int zero = 0;
unsigned char var_17 = (unsigned char)216;
unsigned long long int var_18 = 3493142470470693553ULL;
unsigned short var_19 = (unsigned short)60810;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
