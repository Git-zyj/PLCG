#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1337353068U;
unsigned long long int var_2 = 11081594207833103831ULL;
unsigned long long int var_3 = 15359494199073726314ULL;
_Bool var_4 = (_Bool)1;
long long int var_11 = 2457049597760630786LL;
unsigned long long int var_12 = 10980644350216672917ULL;
_Bool var_13 = (_Bool)0;
unsigned int var_15 = 400103800U;
int zero = 0;
signed char var_17 = (signed char)31;
short var_18 = (short)13948;
void init() {
}

void checksum() {
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
