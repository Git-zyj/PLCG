#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3487969422U;
unsigned int var_2 = 1508257133U;
signed char var_4 = (signed char)40;
unsigned long long int var_6 = 16464967300298330232ULL;
unsigned char var_11 = (unsigned char)3;
unsigned int var_12 = 2332243091U;
int zero = 0;
unsigned long long int var_13 = 18100100208526229807ULL;
long long int var_14 = -7435591321566752360LL;
unsigned long long int var_15 = 7879653880063682457ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
