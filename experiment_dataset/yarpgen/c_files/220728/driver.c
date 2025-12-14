#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)58407;
unsigned int var_5 = 4225551428U;
signed char var_7 = (signed char)53;
unsigned short var_8 = (unsigned short)48556;
int zero = 0;
int var_17 = 592364690;
int var_18 = 1689259581;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
