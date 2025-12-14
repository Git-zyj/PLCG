#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)-35;
unsigned long long int var_10 = 9385883861416427267ULL;
long long int var_15 = -4585975127047483552LL;
unsigned long long int var_17 = 1246172479083536103ULL;
int zero = 0;
signed char var_18 = (signed char)110;
int var_19 = 1551083148;
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
