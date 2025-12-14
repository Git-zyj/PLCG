#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 6556834262952418662ULL;
unsigned long long int var_6 = 6411432741413063728ULL;
unsigned int var_7 = 632089104U;
unsigned long long int var_12 = 8183338436707263308ULL;
int zero = 0;
unsigned long long int var_13 = 5215998440675490444ULL;
unsigned long long int var_14 = 6413137397651568971ULL;
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
