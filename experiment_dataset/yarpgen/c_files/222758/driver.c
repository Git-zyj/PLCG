#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)28685;
_Bool var_6 = (_Bool)0;
int var_7 = 1756331280;
int zero = 0;
unsigned short var_10 = (unsigned short)54098;
unsigned short var_11 = (unsigned short)18284;
long long int var_12 = 4168892971327554085LL;
long long int var_13 = -3703395020986153787LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
