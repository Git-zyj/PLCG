#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1544867893U;
unsigned int var_5 = 549609518U;
unsigned int var_7 = 159219590U;
short var_9 = (short)-28297;
unsigned long long int var_11 = 17156644089189264668ULL;
int zero = 0;
signed char var_14 = (signed char)71;
long long int var_15 = 6635410289937978390LL;
short var_16 = (short)3230;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
