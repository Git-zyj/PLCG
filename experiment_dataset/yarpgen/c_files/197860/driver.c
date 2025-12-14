#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_9 = (unsigned char)48;
unsigned long long int var_10 = 18087023432157285408ULL;
unsigned long long int var_16 = 3876289246466346718ULL;
int zero = 0;
unsigned int var_17 = 3877270921U;
unsigned char var_18 = (unsigned char)7;
unsigned long long int var_19 = 7971269247068819771ULL;
unsigned char var_20 = (unsigned char)28;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
