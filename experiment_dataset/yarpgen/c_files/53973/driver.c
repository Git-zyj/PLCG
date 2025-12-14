#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)15573;
long long int var_3 = 6321163688643880907LL;
unsigned char var_8 = (unsigned char)185;
long long int var_11 = 1347277059240487491LL;
int zero = 0;
unsigned char var_16 = (unsigned char)117;
unsigned char var_17 = (unsigned char)64;
int var_18 = -2010461361;
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
