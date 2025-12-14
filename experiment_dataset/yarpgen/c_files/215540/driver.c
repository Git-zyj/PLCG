#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 8923468071984894458ULL;
unsigned long long int var_3 = 6688979696447075058ULL;
unsigned long long int var_4 = 9524818020755671531ULL;
unsigned long long int var_6 = 12560739091537300239ULL;
unsigned long long int var_8 = 12657157355255777215ULL;
int zero = 0;
unsigned long long int var_10 = 4257011436960707782ULL;
unsigned long long int var_11 = 15921680113335652482ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
