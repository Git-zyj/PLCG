#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
signed char var_3 = (signed char)18;
unsigned long long int var_9 = 15283944716480994122ULL;
int var_10 = -1255848491;
int var_12 = -663640846;
int zero = 0;
unsigned int var_14 = 4293614046U;
short var_15 = (short)23964;
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
