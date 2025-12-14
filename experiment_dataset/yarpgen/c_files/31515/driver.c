#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4086068376U;
unsigned int var_3 = 1832773592U;
unsigned int var_6 = 215406764U;
unsigned short var_7 = (unsigned short)35052;
unsigned int var_8 = 356587453U;
unsigned short var_9 = (unsigned short)42970;
unsigned short var_11 = (unsigned short)12130;
int zero = 0;
unsigned short var_15 = (unsigned short)4286;
unsigned short var_16 = (unsigned short)47874;
unsigned short var_17 = (unsigned short)20373;
unsigned int var_18 = 4272657537U;
void init() {
}

void checksum() {
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
