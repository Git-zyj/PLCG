#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
short var_2 = (short)-32523;
unsigned long long int var_3 = 3636032184427439670ULL;
_Bool var_4 = (_Bool)1;
unsigned int var_5 = 2325161250U;
signed char var_6 = (signed char)76;
long long int var_7 = -496370747920528086LL;
unsigned int var_8 = 48407510U;
int var_9 = 70647977;
int zero = 0;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)0;
long long int var_13 = 6753853947207370550LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
