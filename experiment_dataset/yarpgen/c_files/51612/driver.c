#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1263333912;
unsigned char var_2 = (unsigned char)129;
int zero = 0;
unsigned short var_12 = (unsigned short)40499;
unsigned long long int var_13 = 3503839244996733880ULL;
int var_14 = -854609923;
void init() {
}

void checksum() {
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
