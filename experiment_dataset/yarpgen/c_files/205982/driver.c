#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2763012306U;
int var_11 = 835909295;
long long int var_13 = -5226325404933912337LL;
int zero = 0;
unsigned int var_14 = 2788157670U;
_Bool var_15 = (_Bool)0;
short var_16 = (short)-9533;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)42;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
