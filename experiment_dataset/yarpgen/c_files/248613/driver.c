#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3012301233U;
long long int var_3 = 8132646620007564713LL;
int zero = 0;
long long int var_12 = -798669126227859895LL;
short var_13 = (short)27997;
signed char var_14 = (signed char)80;
signed char var_15 = (signed char)-60;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
