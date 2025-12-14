#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-24;
unsigned long long int var_4 = 6296337001596737031ULL;
unsigned long long int var_5 = 17491612889294824098ULL;
int zero = 0;
short var_12 = (short)-27771;
short var_13 = (short)14283;
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
