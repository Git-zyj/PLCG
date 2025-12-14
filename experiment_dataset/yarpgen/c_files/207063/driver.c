#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_11 = 2622804938U;
unsigned int var_13 = 532681414U;
unsigned int var_15 = 467585300U;
unsigned int var_16 = 69633280U;
int zero = 0;
unsigned int var_18 = 2368561184U;
unsigned int var_19 = 446598838U;
unsigned int var_20 = 1652531896U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
