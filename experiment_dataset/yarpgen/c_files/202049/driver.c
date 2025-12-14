#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 761871119;
signed char var_3 = (signed char)28;
int var_12 = 1413878926;
int zero = 0;
_Bool var_17 = (_Bool)1;
short var_18 = (short)-23326;
unsigned int var_19 = 957015373U;
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
