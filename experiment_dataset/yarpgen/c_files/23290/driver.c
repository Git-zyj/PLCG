#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)20728;
signed char var_2 = (signed char)125;
signed char var_7 = (signed char)49;
_Bool var_8 = (_Bool)0;
int zero = 0;
unsigned int var_13 = 3384005502U;
int var_14 = -1886288067;
unsigned int var_15 = 3835296709U;
signed char var_16 = (signed char)95;
signed char var_17 = (signed char)2;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
