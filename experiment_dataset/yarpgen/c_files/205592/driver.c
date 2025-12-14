#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)54;
signed char var_4 = (signed char)-20;
unsigned int var_9 = 2040781980U;
unsigned int var_12 = 1319554316U;
unsigned char var_15 = (unsigned char)218;
int zero = 0;
unsigned char var_17 = (unsigned char)55;
unsigned int var_18 = 1638422876U;
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
