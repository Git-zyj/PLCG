#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2702329273U;
unsigned int var_10 = 1726463462U;
signed char var_11 = (signed char)118;
signed char var_13 = (signed char)93;
int zero = 0;
signed char var_17 = (signed char)72;
unsigned int var_18 = 229775533U;
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
