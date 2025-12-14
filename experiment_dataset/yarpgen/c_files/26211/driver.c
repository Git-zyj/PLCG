#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-120;
signed char var_15 = (signed char)-30;
signed char var_16 = (signed char)107;
int zero = 0;
signed char var_20 = (signed char)-119;
signed char var_21 = (signed char)-4;
signed char var_22 = (signed char)3;
signed char var_23 = (signed char)95;
signed char var_24 = (signed char)16;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
