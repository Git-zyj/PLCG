#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 939631490U;
unsigned long long int var_2 = 15864174103095785796ULL;
unsigned long long int var_3 = 4165428857161148394ULL;
int zero = 0;
unsigned int var_15 = 3184587094U;
unsigned int var_16 = 335502017U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
