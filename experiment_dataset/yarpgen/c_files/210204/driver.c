#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1179556676U;
long long int var_8 = -3479958753946355620LL;
unsigned int var_15 = 4037962017U;
int zero = 0;
unsigned int var_16 = 480493611U;
unsigned int var_17 = 1051216965U;
unsigned int var_18 = 1564963973U;
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
