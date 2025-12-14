#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1229208991;
int var_2 = 1602107873;
signed char var_9 = (signed char)85;
long long int var_11 = 3329374698467594591LL;
long long int var_12 = 5466525155369011579LL;
int zero = 0;
int var_13 = -821592025;
int var_14 = -2023903875;
unsigned int var_15 = 73659056U;
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
