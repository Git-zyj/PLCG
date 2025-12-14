#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-59;
unsigned int var_6 = 1285487411U;
_Bool var_12 = (_Bool)1;
short var_15 = (short)14013;
int var_18 = -613552767;
int zero = 0;
short var_19 = (short)29529;
unsigned int var_20 = 2171081032U;
signed char var_21 = (signed char)42;
void init() {
}

void checksum() {
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
