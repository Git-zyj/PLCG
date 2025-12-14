#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3576708940U;
unsigned int var_11 = 587327961U;
unsigned int var_12 = 3411732272U;
unsigned int var_15 = 462287391U;
int zero = 0;
unsigned int var_20 = 2499065038U;
unsigned int var_21 = 3253512616U;
unsigned int var_22 = 2488590248U;
unsigned int var_23 = 170625354U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
