#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 544764860;
int var_7 = -108713498;
unsigned long long int var_8 = 15225800646601129467ULL;
int var_10 = -2037412494;
int zero = 0;
short var_12 = (short)-12032;
unsigned long long int var_13 = 9470519722808278674ULL;
unsigned long long int var_14 = 14012617259618410783ULL;
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
