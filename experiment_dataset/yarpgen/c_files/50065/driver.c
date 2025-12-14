#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1526202374052287449LL;
unsigned short var_2 = (unsigned short)36295;
unsigned short var_4 = (unsigned short)30054;
_Bool var_11 = (_Bool)1;
int zero = 0;
int var_13 = -367418378;
unsigned int var_14 = 1872284647U;
void init() {
}

void checksum() {
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
