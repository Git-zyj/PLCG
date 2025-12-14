#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)12;
unsigned long long int var_5 = 7849333799464776905ULL;
_Bool var_9 = (_Bool)1;
int zero = 0;
long long int var_14 = 2538348761114381318LL;
long long int var_15 = 756189049860720973LL;
int var_16 = -222674264;
unsigned int var_17 = 2584860748U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
