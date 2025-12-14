#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)20804;
long long int var_4 = -8495726049616142729LL;
unsigned int var_8 = 341744905U;
int var_9 = -483949718;
int zero = 0;
long long int var_11 = 7651913231574327471LL;
int var_12 = 1605814619;
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
