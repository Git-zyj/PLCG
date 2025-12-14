#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1467286025524026943LL;
unsigned int var_5 = 1427408808U;
unsigned int var_7 = 3324042196U;
unsigned short var_8 = (unsigned short)28398;
long long int var_12 = -4676127914926802924LL;
int zero = 0;
unsigned short var_13 = (unsigned short)14917;
_Bool var_14 = (_Bool)1;
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
