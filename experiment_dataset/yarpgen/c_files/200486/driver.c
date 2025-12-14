#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1021057166909970288LL;
_Bool var_2 = (_Bool)0;
_Bool var_6 = (_Bool)1;
_Bool var_8 = (_Bool)1;
unsigned short var_12 = (unsigned short)60678;
int zero = 0;
short var_14 = (short)1300;
signed char var_15 = (signed char)60;
int var_16 = -1622398023;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
