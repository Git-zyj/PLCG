#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_10 = (_Bool)0;
unsigned int var_12 = 2890890245U;
long long int var_14 = 3397421350297548203LL;
_Bool var_16 = (_Bool)0;
signed char var_18 = (signed char)35;
int zero = 0;
int var_20 = -1217837755;
unsigned short var_21 = (unsigned short)30439;
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
