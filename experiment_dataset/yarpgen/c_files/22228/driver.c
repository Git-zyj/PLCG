#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1814959736;
_Bool var_1 = (_Bool)0;
signed char var_3 = (signed char)84;
long long int var_4 = -358622525380054694LL;
unsigned int var_6 = 2853969187U;
signed char var_9 = (signed char)41;
unsigned int var_11 = 1495937587U;
short var_12 = (short)21722;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 1459206827U;
signed char var_20 = (signed char)43;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
