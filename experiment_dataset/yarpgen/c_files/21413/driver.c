#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_9 = (_Bool)1;
unsigned int var_10 = 947903191U;
signed char var_13 = (signed char)97;
unsigned short var_17 = (unsigned short)16264;
long long int var_18 = 7756063189658845958LL;
int zero = 0;
long long int var_20 = 1970229472741942020LL;
unsigned char var_21 = (unsigned char)132;
unsigned char var_22 = (unsigned char)190;
unsigned int var_23 = 3118343194U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
