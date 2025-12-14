#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)104;
int var_3 = 401400041;
signed char var_6 = (signed char)123;
_Bool var_7 = (_Bool)1;
int zero = 0;
int var_11 = 1663878429;
unsigned long long int var_12 = 7532878587102631897ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
