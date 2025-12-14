#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 214925060U;
unsigned long long int var_4 = 15277197426569962100ULL;
signed char var_7 = (signed char)73;
int var_12 = 1375650718;
int zero = 0;
unsigned long long int var_13 = 6593869979630493166ULL;
unsigned int var_14 = 2652225927U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
