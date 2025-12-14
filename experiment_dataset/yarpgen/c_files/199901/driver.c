#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-26065;
signed char var_4 = (signed char)59;
int var_5 = 482820926;
unsigned long long int var_15 = 5040540573876185783ULL;
int zero = 0;
signed char var_19 = (signed char)-87;
int var_20 = 404575655;
void init() {
}

void checksum() {
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
