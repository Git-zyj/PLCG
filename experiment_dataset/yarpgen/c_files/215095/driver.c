#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_10 = 10404445256538348089ULL;
int var_12 = -634864299;
unsigned int var_13 = 1656405402U;
signed char var_15 = (signed char)69;
int zero = 0;
short var_16 = (short)13717;
short var_17 = (short)30079;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
