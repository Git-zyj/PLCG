#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)70;
unsigned int var_2 = 454604132U;
short var_5 = (short)16223;
unsigned long long int var_8 = 2655392347097245627ULL;
int zero = 0;
signed char var_10 = (signed char)16;
unsigned int var_11 = 589404250U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
