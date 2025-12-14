#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4218822995069030499LL;
unsigned long long int var_8 = 9432946934075616599ULL;
unsigned long long int var_12 = 8234845939540275152ULL;
int zero = 0;
short var_16 = (short)-24409;
long long int var_17 = 1589958757731493801LL;
signed char var_18 = (signed char)81;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
