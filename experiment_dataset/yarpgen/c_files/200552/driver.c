#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13626324811798485557ULL;
long long int var_3 = -2194886671813773610LL;
unsigned long long int var_4 = 13022559233566039306ULL;
unsigned long long int var_5 = 9238448438617771841ULL;
unsigned int var_6 = 3196761232U;
long long int var_7 = -836868775381234996LL;
_Bool var_8 = (_Bool)0;
int zero = 0;
int var_10 = -1252499480;
int var_11 = 1871949597;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
