#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16100695255182874121ULL;
unsigned long long int var_1 = 14456213461578465572ULL;
short var_16 = (short)26927;
int zero = 0;
unsigned int var_19 = 996514125U;
long long int var_20 = 8216630322333895235LL;
void init() {
}

void checksum() {
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
