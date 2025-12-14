#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1366535106;
unsigned int var_4 = 610189844U;
long long int var_9 = 600955139482363584LL;
unsigned int var_10 = 2884231175U;
int zero = 0;
short var_11 = (short)-28082;
unsigned int var_12 = 1290081207U;
_Bool var_13 = (_Bool)0;
long long int var_14 = 5957517821717939357LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
