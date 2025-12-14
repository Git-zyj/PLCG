#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 298997102487175737ULL;
long long int var_11 = -8942774723221203807LL;
int var_12 = -1947510685;
int zero = 0;
signed char var_13 = (signed char)122;
long long int var_14 = 7838040892179449354LL;
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
