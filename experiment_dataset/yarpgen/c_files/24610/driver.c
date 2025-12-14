#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2434303527U;
unsigned long long int var_1 = 2761725651882239372ULL;
long long int var_15 = 8910919923996666208LL;
unsigned int var_17 = 3040800489U;
int zero = 0;
unsigned long long int var_19 = 7091195494856292443ULL;
signed char var_20 = (signed char)-26;
long long int var_21 = -8601895700668048240LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
