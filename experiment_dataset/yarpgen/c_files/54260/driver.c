#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2953282363U;
unsigned int var_9 = 2285320938U;
unsigned int var_10 = 1502422446U;
signed char var_11 = (signed char)98;
short var_14 = (short)-30430;
int zero = 0;
unsigned long long int var_17 = 12070051304000086177ULL;
long long int var_18 = -8700894794123105265LL;
int var_19 = -910193586;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
