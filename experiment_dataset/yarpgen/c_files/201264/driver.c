#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2830995514U;
unsigned int var_3 = 4007731494U;
unsigned long long int var_6 = 12874955691581784956ULL;
signed char var_13 = (signed char)121;
int zero = 0;
int var_14 = -1518507955;
short var_15 = (short)23258;
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
