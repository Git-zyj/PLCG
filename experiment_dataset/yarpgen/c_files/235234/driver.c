#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3518236538U;
signed char var_3 = (signed char)124;
signed char var_12 = (signed char)-50;
long long int var_13 = 8084311230727365387LL;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned int var_15 = 3411841096U;
unsigned char var_16 = (unsigned char)232;
int var_17 = 2101884253;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
