#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)23213;
unsigned int var_4 = 3578174293U;
int var_6 = 259791041;
short var_7 = (short)20943;
int zero = 0;
short var_12 = (short)-22496;
unsigned int var_13 = 988624093U;
short var_14 = (short)-22820;
void init() {
}

void checksum() {
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
