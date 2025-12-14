#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 870297240;
unsigned int var_1 = 4091140363U;
short var_2 = (short)15282;
int var_3 = -1390940852;
short var_4 = (short)6257;
short var_5 = (short)4636;
unsigned int var_7 = 1070163394U;
long long int var_8 = 7088965226400766943LL;
short var_9 = (short)2142;
int zero = 0;
unsigned long long int var_11 = 16493032000850135382ULL;
short var_12 = (short)-14642;
long long int var_13 = -6741704649728732793LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
