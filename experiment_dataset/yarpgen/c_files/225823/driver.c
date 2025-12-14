#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 5327628288444310103ULL;
_Bool var_9 = (_Bool)0;
_Bool var_12 = (_Bool)1;
int zero = 0;
int var_17 = 2132151865;
unsigned int var_18 = 3467846618U;
short var_19 = (short)28861;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
