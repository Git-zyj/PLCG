#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_9 = (short)6519;
unsigned long long int var_12 = 7204587435393993135ULL;
signed char var_16 = (signed char)-19;
int zero = 0;
int var_17 = 1317330798;
long long int var_18 = 7033008732684883560LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
