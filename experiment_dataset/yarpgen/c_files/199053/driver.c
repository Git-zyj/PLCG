#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = -1724470236;
unsigned char var_8 = (unsigned char)220;
int var_10 = -2078600315;
int zero = 0;
unsigned int var_12 = 3315822549U;
int var_13 = -789014096;
unsigned short var_14 = (unsigned short)16978;
unsigned int var_15 = 1202037827U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
