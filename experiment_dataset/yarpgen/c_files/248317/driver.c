#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -2484828715329479642LL;
unsigned int var_3 = 3457512621U;
unsigned char var_7 = (unsigned char)0;
int zero = 0;
long long int var_15 = -5972277721671211573LL;
unsigned long long int var_16 = 7790002440946272896ULL;
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
