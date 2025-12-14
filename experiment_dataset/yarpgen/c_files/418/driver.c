#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)221;
short var_9 = (short)13857;
signed char var_15 = (signed char)64;
signed char var_16 = (signed char)92;
int zero = 0;
unsigned long long int var_17 = 6332397456408865317ULL;
short var_18 = (short)-2102;
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
