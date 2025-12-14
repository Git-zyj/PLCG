#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)126;
unsigned int var_5 = 3515620891U;
unsigned int var_6 = 2403994541U;
unsigned int var_11 = 1639859514U;
int zero = 0;
unsigned int var_20 = 1158706065U;
unsigned long long int var_21 = 9175000229861905993ULL;
unsigned long long int var_22 = 2380199332896015716ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
