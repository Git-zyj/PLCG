#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)102;
short var_7 = (short)-3857;
unsigned int var_9 = 149555527U;
signed char var_10 = (signed char)-23;
unsigned int var_11 = 1352433166U;
int zero = 0;
unsigned int var_16 = 2176156110U;
signed char var_17 = (signed char)-113;
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
