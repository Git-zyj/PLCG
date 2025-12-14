#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2721472058U;
unsigned int var_3 = 1236611162U;
_Bool var_4 = (_Bool)0;
long long int var_10 = 5367750049482948517LL;
unsigned int var_14 = 594956578U;
int zero = 0;
signed char var_16 = (signed char)125;
signed char var_17 = (signed char)75;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
