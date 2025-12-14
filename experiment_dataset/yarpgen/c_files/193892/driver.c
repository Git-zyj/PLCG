#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1298791636;
int var_5 = -1191894148;
long long int var_7 = -7420201639608314564LL;
_Bool var_8 = (_Bool)1;
unsigned int var_9 = 2438804792U;
int zero = 0;
unsigned short var_12 = (unsigned short)17651;
signed char var_13 = (signed char)84;
short var_14 = (short)4064;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
