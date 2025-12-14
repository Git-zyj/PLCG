#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8736561081187850459LL;
unsigned int var_3 = 1698624932U;
signed char var_4 = (signed char)105;
short var_5 = (short)-32212;
unsigned int var_8 = 1961322472U;
int zero = 0;
unsigned long long int var_11 = 6802238065708565929ULL;
unsigned long long int var_12 = 4816397721109591241ULL;
void init() {
}

void checksum() {
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
