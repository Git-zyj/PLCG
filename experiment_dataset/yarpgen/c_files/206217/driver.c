#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1653184265U;
_Bool var_16 = (_Bool)1;
int zero = 0;
int var_19 = -86287772;
signed char var_20 = (signed char)-94;
unsigned int var_21 = 1274036556U;
unsigned short var_22 = (unsigned short)34520;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
