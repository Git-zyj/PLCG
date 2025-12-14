#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_8 = 1232890114;
unsigned long long int var_16 = 12171058464932423271ULL;
unsigned int var_17 = 1358562214U;
int zero = 0;
unsigned char var_19 = (unsigned char)243;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)210;
short var_22 = (short)28386;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
