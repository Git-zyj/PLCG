#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6072229606644247146ULL;
unsigned int var_8 = 847438279U;
unsigned int var_13 = 2941568342U;
unsigned int var_16 = 3641777831U;
unsigned long long int var_17 = 4029493032010850093ULL;
int zero = 0;
unsigned long long int var_18 = 18198053324935483425ULL;
unsigned int var_19 = 871166936U;
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
