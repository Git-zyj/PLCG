#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)22144;
unsigned int var_3 = 916099789U;
signed char var_11 = (signed char)44;
unsigned int var_12 = 2347823312U;
int zero = 0;
unsigned long long int var_17 = 8404054932257327578ULL;
int var_18 = -1515457562;
short var_19 = (short)27324;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
