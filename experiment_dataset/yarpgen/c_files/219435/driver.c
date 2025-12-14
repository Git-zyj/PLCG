#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3725769700U;
unsigned int var_5 = 1860784244U;
short var_6 = (short)-16877;
int var_7 = 1407173649;
int zero = 0;
unsigned long long int var_12 = 17444879104837131416ULL;
unsigned long long int var_13 = 452003584691733911ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
