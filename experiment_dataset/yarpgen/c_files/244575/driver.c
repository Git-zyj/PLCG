#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -560701266320890942LL;
unsigned int var_2 = 3410311088U;
unsigned int var_4 = 2467886943U;
unsigned long long int var_5 = 5623035409271469568ULL;
signed char var_8 = (signed char)78;
int zero = 0;
unsigned long long int var_12 = 56918682064238378ULL;
signed char var_13 = (signed char)116;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
