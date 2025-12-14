#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-81;
_Bool var_6 = (_Bool)1;
long long int var_7 = 904841013718631379LL;
long long int var_8 = -2469675843878675717LL;
signed char var_13 = (signed char)64;
int zero = 0;
unsigned long long int var_17 = 10081428640150467654ULL;
unsigned short var_18 = (unsigned short)52342;
unsigned short var_19 = (unsigned short)17209;
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
