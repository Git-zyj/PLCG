#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1186429722;
long long int var_1 = 2238999570042465171LL;
long long int var_6 = -4880483987228974828LL;
int zero = 0;
_Bool var_11 = (_Bool)0;
short var_12 = (short)-30204;
unsigned int var_13 = 1397554235U;
int var_14 = 1592597225;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
