#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = -860960665;
signed char var_7 = (signed char)112;
long long int var_11 = -4061042442130334950LL;
unsigned long long int var_13 = 593023212526327023ULL;
int zero = 0;
long long int var_14 = 5259110518163724821LL;
unsigned int var_15 = 4155121046U;
short var_16 = (short)28628;
signed char var_17 = (signed char)105;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
