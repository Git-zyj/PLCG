#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1734723998;
short var_8 = (short)18431;
int zero = 0;
signed char var_11 = (signed char)64;
unsigned char var_12 = (unsigned char)169;
unsigned long long int var_13 = 16375317643991133931ULL;
unsigned long long int var_14 = 12208430797579939102ULL;
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
