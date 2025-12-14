#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1567704140;
unsigned long long int var_13 = 11892756990792626388ULL;
unsigned int var_14 = 4176915927U;
unsigned char var_16 = (unsigned char)98;
int zero = 0;
unsigned char var_18 = (unsigned char)79;
unsigned int var_19 = 3459716064U;
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
