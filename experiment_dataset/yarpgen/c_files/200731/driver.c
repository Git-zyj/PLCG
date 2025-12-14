#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1864467314;
int var_2 = -144279578;
unsigned long long int var_5 = 11100499038505160702ULL;
int var_6 = 1876783594;
int zero = 0;
unsigned int var_10 = 1992235151U;
int var_11 = 994397467;
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
