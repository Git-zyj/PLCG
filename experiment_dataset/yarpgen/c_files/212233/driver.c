#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3527480905U;
unsigned int var_2 = 795751461U;
unsigned int var_8 = 3735588109U;
unsigned int var_9 = 677392932U;
_Bool var_12 = (_Bool)1;
unsigned int var_14 = 2293885231U;
unsigned int var_16 = 2124685238U;
int zero = 0;
unsigned int var_18 = 1245194259U;
unsigned int var_19 = 2357966121U;
_Bool var_20 = (_Bool)0;
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
