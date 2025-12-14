#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3706811539U;
unsigned int var_3 = 1740352693U;
unsigned short var_5 = (unsigned short)59726;
unsigned int var_8 = 1784643466U;
unsigned char var_9 = (unsigned char)175;
_Bool var_11 = (_Bool)0;
long long int var_13 = -4295790416661368932LL;
int zero = 0;
unsigned int var_20 = 3720502605U;
unsigned char var_21 = (unsigned char)15;
_Bool var_22 = (_Bool)0;
unsigned long long int var_23 = 10963026252865018546ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
