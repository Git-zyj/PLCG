#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4008300097U;
unsigned int var_9 = 132849653U;
_Bool var_10 = (_Bool)0;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 1282682428U;
int zero = 0;
long long int var_15 = -4420176952516149319LL;
unsigned int var_16 = 1512396193U;
unsigned char var_17 = (unsigned char)19;
unsigned int var_18 = 1776009142U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
