#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)124;
signed char var_2 = (signed char)77;
signed char var_3 = (signed char)12;
_Bool var_5 = (_Bool)1;
unsigned int var_13 = 2185008696U;
int zero = 0;
unsigned short var_15 = (unsigned short)16363;
signed char var_16 = (signed char)24;
unsigned short var_17 = (unsigned short)40646;
void init() {
}

void checksum() {
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
