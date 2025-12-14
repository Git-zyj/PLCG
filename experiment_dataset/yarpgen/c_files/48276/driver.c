#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -785385945;
long long int var_4 = 5163950222895040718LL;
_Bool var_5 = (_Bool)1;
int zero = 0;
_Bool var_10 = (_Bool)1;
short var_11 = (short)-24877;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)-85;
unsigned short var_14 = (unsigned short)43142;
short var_15 = (short)21699;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
