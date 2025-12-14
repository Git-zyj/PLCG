#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -2101267727;
int var_6 = 538509451;
int var_7 = 2001898725;
int var_11 = -1432076716;
int var_12 = -1307107771;
int zero = 0;
int var_13 = 1873027786;
int var_14 = -1260465193;
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
