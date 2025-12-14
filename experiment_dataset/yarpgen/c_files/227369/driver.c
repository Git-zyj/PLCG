#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1064375056U;
unsigned long long int var_1 = 2705093913627895751ULL;
int var_2 = -192531628;
unsigned int var_3 = 3963976100U;
int zero = 0;
signed char var_10 = (signed char)-54;
unsigned int var_11 = 3625159254U;
long long int var_12 = 5660697465334646053LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
