#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2580904U;
unsigned long long int var_2 = 8016230081271735036ULL;
short var_3 = (short)6193;
unsigned int var_8 = 2140275459U;
int zero = 0;
unsigned long long int var_11 = 14795866817218052930ULL;
int var_12 = -1961218746;
signed char var_13 = (signed char)12;
unsigned char var_14 = (unsigned char)36;
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
