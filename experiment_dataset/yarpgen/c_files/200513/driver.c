#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_1 = 4171926851U;
unsigned int var_2 = 4032367324U;
unsigned int var_4 = 4050524218U;
unsigned int var_8 = 2317387869U;
int var_15 = 1447207107;
unsigned long long int var_17 = 4615608100930757059ULL;
int zero = 0;
unsigned long long int var_20 = 17202162819068344499ULL;
unsigned short var_21 = (unsigned short)51122;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
