#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 4418304509846383823ULL;
long long int var_12 = -869598093806952188LL;
int zero = 0;
unsigned long long int var_13 = 17294532025556620641ULL;
signed char var_14 = (signed char)88;
short var_15 = (short)-9513;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
