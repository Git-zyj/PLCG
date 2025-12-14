#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)30407;
unsigned long long int var_1 = 18138865415713200644ULL;
signed char var_13 = (signed char)113;
int var_14 = 1857579445;
unsigned short var_15 = (unsigned short)62556;
int var_16 = -268872657;
int zero = 0;
unsigned long long int var_17 = 9510987639156536726ULL;
int var_18 = -600480733;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
