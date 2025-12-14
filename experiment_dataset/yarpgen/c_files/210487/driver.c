#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1114335677103901249LL;
long long int var_2 = 888636631167110676LL;
long long int var_3 = -4566407898963536861LL;
int zero = 0;
long long int var_10 = -4702823448830268656LL;
unsigned int var_11 = 433607239U;
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
