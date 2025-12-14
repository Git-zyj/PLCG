#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_1 = 5028435482396333197ULL;
int var_4 = 1715784428;
unsigned long long int var_7 = 8137602590849704780ULL;
short var_11 = (short)-7956;
int var_12 = 956415696;
int zero = 0;
unsigned int var_13 = 3420002805U;
int var_14 = -166754558;
unsigned char var_15 = (unsigned char)115;
signed char var_16 = (signed char)29;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
