#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2671936553U;
unsigned char var_2 = (unsigned char)109;
int var_7 = 1213597504;
unsigned int var_10 = 1416688828U;
signed char var_12 = (signed char)-73;
_Bool var_13 = (_Bool)1;
long long int var_17 = 2940393821341836754LL;
unsigned int var_19 = 1623881186U;
int zero = 0;
_Bool var_20 = (_Bool)0;
long long int var_21 = 7987129729521058028LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
