#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2357933258U;
_Bool var_7 = (_Bool)1;
unsigned int var_10 = 1255969536U;
long long int var_11 = 7571824660295992279LL;
int zero = 0;
long long int var_13 = -2951422459006752297LL;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 3412082238U;
unsigned int var_16 = 2543001770U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
