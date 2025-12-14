#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)20;
unsigned long long int var_3 = 5907127354695982169ULL;
unsigned int var_5 = 1849855821U;
int var_6 = -1792074960;
unsigned long long int var_10 = 4459886705252050713ULL;
unsigned short var_11 = (unsigned short)13056;
unsigned long long int var_12 = 13639050904675419247ULL;
unsigned long long int var_17 = 6743047937619846875ULL;
int zero = 0;
unsigned long long int var_20 = 3296543410630664443ULL;
unsigned long long int var_21 = 326281052813912837ULL;
short var_22 = (short)-12116;
short var_23 = (short)-16672;
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
