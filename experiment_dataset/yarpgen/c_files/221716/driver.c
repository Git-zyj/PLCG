#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -524618623;
unsigned long long int var_4 = 8091864433296610415ULL;
unsigned short var_7 = (unsigned short)57571;
unsigned int var_9 = 3631480401U;
long long int var_14 = -5836597808534063979LL;
unsigned char var_15 = (unsigned char)216;
unsigned int var_16 = 1611302689U;
int zero = 0;
_Bool var_18 = (_Bool)0;
short var_19 = (short)-18922;
short var_20 = (short)-23681;
short var_21 = (short)-22283;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
