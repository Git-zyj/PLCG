#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-14699;
int var_4 = -902225655;
long long int var_16 = -5059393201060826420LL;
int zero = 0;
unsigned int var_17 = 1765011769U;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 11185755959863098860ULL;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)91;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
