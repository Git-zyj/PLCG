#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3331152724400976439ULL;
unsigned long long int var_6 = 3266883981501827228ULL;
int zero = 0;
unsigned long long int var_11 = 5328890831947206242ULL;
unsigned long long int var_12 = 3400786345730716976ULL;
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
