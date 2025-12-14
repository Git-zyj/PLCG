#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)29;
unsigned int var_1 = 1781700194U;
unsigned int var_2 = 3095889679U;
unsigned int var_5 = 3523962690U;
unsigned long long int var_9 = 315155533570870818ULL;
short var_12 = (short)22497;
unsigned int var_13 = 2244797052U;
int zero = 0;
int var_16 = -281683127;
unsigned long long int var_17 = 354230600844914271ULL;
unsigned long long int var_18 = 5526820349290871264ULL;
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
