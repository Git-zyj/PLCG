#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 851439416679005119LL;
_Bool var_4 = (_Bool)1;
int var_6 = 1096226585;
int zero = 0;
unsigned int var_13 = 3266645794U;
unsigned short var_14 = (unsigned short)54410;
long long int var_15 = 3058718591131473028LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
