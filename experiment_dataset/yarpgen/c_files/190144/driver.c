#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 9363849071696796664ULL;
signed char var_10 = (signed char)79;
unsigned long long int var_12 = 14194502136863137429ULL;
int zero = 0;
int var_18 = 872653852;
unsigned long long int var_19 = 16648850676989982977ULL;
void init() {
}

void checksum() {
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
