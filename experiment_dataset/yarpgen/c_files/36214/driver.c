#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1713896099;
unsigned long long int var_3 = 17247989278772144557ULL;
unsigned long long int var_4 = 3118345012524664834ULL;
int zero = 0;
int var_12 = 948777536;
int var_13 = -1914562837;
unsigned short var_14 = (unsigned short)32585;
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
