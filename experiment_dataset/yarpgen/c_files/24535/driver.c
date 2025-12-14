#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)13429;
signed char var_3 = (signed char)-34;
unsigned long long int var_7 = 8477495766345378748ULL;
int zero = 0;
unsigned long long int var_11 = 4381794300976136874ULL;
int var_12 = -392991596;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
