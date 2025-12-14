#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-28988;
int var_5 = -576555236;
long long int var_12 = 8530167497795597835LL;
int zero = 0;
unsigned long long int var_18 = 11045542372632651824ULL;
unsigned long long int var_19 = 7046698626069487922ULL;
long long int var_20 = -1389549194100401582LL;
void init() {
}

void checksum() {
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
