#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_8 = 722439757U;
unsigned long long int var_11 = 11206303094200813213ULL;
signed char var_14 = (signed char)-35;
int zero = 0;
int var_20 = 2075389606;
signed char var_21 = (signed char)-41;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
