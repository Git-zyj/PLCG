#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)0;
unsigned int var_10 = 2591625733U;
signed char var_13 = (signed char)-43;
int var_15 = -645792460;
int zero = 0;
unsigned int var_19 = 2102765963U;
unsigned int var_20 = 190906956U;
int var_21 = 1224812069;
void init() {
}

void checksum() {
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
