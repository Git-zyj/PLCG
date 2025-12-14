#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 1028469527U;
unsigned char var_9 = (unsigned char)60;
long long int var_10 = 3238151829630002961LL;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)55;
long long int var_15 = -4488468860375554872LL;
int zero = 0;
int var_16 = -804520803;
long long int var_17 = 9161844401759722781LL;
void init() {
}

void checksum() {
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
