#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
long long int var_2 = -1557269025992089201LL;
long long int var_4 = 6156698103624681087LL;
unsigned int var_5 = 574941960U;
unsigned int var_11 = 2438137133U;
int zero = 0;
unsigned char var_13 = (unsigned char)231;
int var_14 = 1562231481;
unsigned int var_15 = 3366886437U;
unsigned int var_16 = 2194845935U;
unsigned int var_17 = 230424046U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
