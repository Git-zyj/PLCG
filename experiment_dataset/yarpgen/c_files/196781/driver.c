#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1979454578;
int var_4 = -2005429059;
short var_8 = (short)-31228;
short var_12 = (short)-17837;
int zero = 0;
int var_13 = -1643975850;
unsigned long long int var_14 = 2351679947064267025ULL;
void init() {
}

void checksum() {
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
