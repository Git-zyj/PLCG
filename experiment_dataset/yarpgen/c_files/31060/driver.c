#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 11141688425444227935ULL;
unsigned long long int var_10 = 2590537257666612635ULL;
int zero = 0;
unsigned long long int var_13 = 14676481432481343773ULL;
unsigned long long int var_14 = 10621569318198899845ULL;
unsigned long long int var_15 = 10554888569400231182ULL;
void init() {
}

void checksum() {
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
