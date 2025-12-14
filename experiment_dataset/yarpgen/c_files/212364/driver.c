#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-74;
_Bool var_1 = (_Bool)0;
unsigned int var_4 = 3037686262U;
signed char var_6 = (signed char)-8;
unsigned int var_10 = 2409271797U;
unsigned int var_12 = 4256568903U;
int zero = 0;
int var_13 = 1195640889;
int var_14 = -120176018;
long long int var_15 = 8631489688963921551LL;
unsigned short var_16 = (unsigned short)21983;
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
