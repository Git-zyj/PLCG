#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_10 = 6345983836584614458ULL;
unsigned long long int var_13 = 14751032525334468859ULL;
unsigned int var_15 = 2264869550U;
int zero = 0;
unsigned long long int var_19 = 16078924344531890319ULL;
unsigned int var_20 = 1716646390U;
void init() {
}

void checksum() {
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
