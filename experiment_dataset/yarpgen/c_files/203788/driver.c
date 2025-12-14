#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 2450966116U;
unsigned int var_9 = 2831907170U;
unsigned long long int var_10 = 5975960421133656664ULL;
int zero = 0;
unsigned long long int var_12 = 6986482610728947181ULL;
unsigned int var_13 = 3536567788U;
unsigned int var_14 = 3525266453U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
