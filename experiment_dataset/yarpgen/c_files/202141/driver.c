#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 8511942137750413875ULL;
unsigned short var_9 = (unsigned short)11069;
unsigned short var_11 = (unsigned short)8530;
int zero = 0;
unsigned short var_12 = (unsigned short)42461;
unsigned int var_13 = 1558099744U;
short var_14 = (short)11951;
signed char var_15 = (signed char)-58;
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
