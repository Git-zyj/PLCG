#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1412597947;
unsigned char var_6 = (unsigned char)133;
_Bool var_11 = (_Bool)1;
long long int var_14 = -5831045097046792025LL;
short var_15 = (short)2;
int zero = 0;
unsigned long long int var_17 = 14040031793451263229ULL;
unsigned int var_18 = 4044770124U;
signed char var_19 = (signed char)12;
void init() {
}

void checksum() {
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
