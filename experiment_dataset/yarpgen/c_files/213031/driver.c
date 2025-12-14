#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_3 = 218897002;
unsigned long long int var_17 = 16274841702926537996ULL;
int zero = 0;
int var_18 = -1948252631;
unsigned long long int var_19 = 7460723371174472677ULL;
unsigned long long int var_20 = 11811604733815505119ULL;
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
