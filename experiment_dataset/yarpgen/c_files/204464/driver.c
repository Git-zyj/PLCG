#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2452580109U;
unsigned int var_1 = 3092406523U;
unsigned int var_4 = 1016560190U;
int zero = 0;
unsigned long long int var_13 = 6860181757068846054ULL;
unsigned int var_14 = 3894764002U;
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
