#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned long long int var_2 = 3289013637294740213ULL;
int var_5 = -2112760772;
int var_7 = -712317278;
unsigned long long int var_12 = 16345079057801505532ULL;
int zero = 0;
_Bool var_14 = (_Bool)1;
int var_15 = 1021105041;
void init() {
}

void checksum() {
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
