#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6316062219108690428ULL;
int var_1 = -2091334100;
int var_2 = -1012539102;
unsigned long long int var_3 = 2719146077687432336ULL;
int var_10 = 970352455;
int zero = 0;
unsigned long long int var_11 = 16553930413972966263ULL;
unsigned long long int var_12 = 6394537895262706067ULL;
unsigned long long int var_13 = 7417026191134270104ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
