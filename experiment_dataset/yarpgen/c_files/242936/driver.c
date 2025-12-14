#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-26751;
signed char var_14 = (signed char)-34;
int zero = 0;
unsigned int var_17 = 3943229039U;
unsigned long long int var_18 = 1555535857560554586ULL;
signed char var_19 = (signed char)86;
short var_20 = (short)29541;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
