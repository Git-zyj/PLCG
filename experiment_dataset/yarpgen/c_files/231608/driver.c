#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2616039465U;
_Bool var_8 = (_Bool)1;
signed char var_11 = (signed char)44;
unsigned char var_12 = (unsigned char)247;
int zero = 0;
unsigned int var_15 = 1258868589U;
short var_16 = (short)-28500;
unsigned int var_17 = 1047635132U;
short var_18 = (short)-16648;
int var_19 = -1398685219;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
