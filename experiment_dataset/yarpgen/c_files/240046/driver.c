#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -6189449868187258007LL;
long long int var_7 = 4770771107381997748LL;
int zero = 0;
long long int var_17 = -6035608852757913176LL;
signed char var_18 = (signed char)51;
signed char var_19 = (signed char)41;
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
