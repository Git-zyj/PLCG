#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)2312;
unsigned int var_3 = 2717128409U;
int var_11 = -1655271821;
unsigned short var_14 = (unsigned short)48316;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 795541471U;
int zero = 0;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)17;
void init() {
}

void checksum() {
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
