#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_1 = 2874079692U;
long long int var_4 = 6567709356950209221LL;
int var_8 = -320066597;
short var_12 = (short)27917;
int zero = 0;
unsigned long long int var_16 = 16091498780101904519ULL;
signed char var_17 = (signed char)84;
void init() {
}

void checksum() {
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
