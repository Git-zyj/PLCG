#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5807660460400659609LL;
unsigned int var_3 = 3933099783U;
long long int var_12 = -4345963218793171421LL;
unsigned long long int var_13 = 14225824205920912015ULL;
long long int var_15 = -3524082292837296343LL;
int zero = 0;
_Bool var_18 = (_Bool)1;
int var_19 = -1474958618;
void init() {
}

void checksum() {
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
