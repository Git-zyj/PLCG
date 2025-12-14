#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -305022166;
unsigned char var_13 = (unsigned char)86;
unsigned int var_15 = 3124223283U;
int zero = 0;
int var_19 = 1659991421;
unsigned long long int var_20 = 17430479353782938132ULL;
unsigned short var_21 = (unsigned short)36363;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
