#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3462115787U;
unsigned int var_5 = 3718986302U;
_Bool var_10 = (_Bool)1;
unsigned int var_12 = 3973780675U;
int var_13 = 1486223005;
int zero = 0;
unsigned int var_15 = 3548240861U;
unsigned int var_16 = 1361183016U;
long long int var_17 = 82220605018575156LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
