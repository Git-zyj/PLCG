#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)122;
unsigned int var_10 = 1182670524U;
unsigned long long int var_12 = 17015625824909559142ULL;
int zero = 0;
signed char var_13 = (signed char)-68;
unsigned long long int var_14 = 2200128839895476821ULL;
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
