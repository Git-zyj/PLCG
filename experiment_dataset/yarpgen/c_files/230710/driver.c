#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16380951260720678248ULL;
unsigned long long int var_10 = 741972131963071725ULL;
int var_11 = 2073732889;
int zero = 0;
unsigned short var_18 = (unsigned short)43940;
int var_19 = 1562167652;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
