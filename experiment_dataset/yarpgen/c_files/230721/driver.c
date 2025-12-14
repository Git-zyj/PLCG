#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1428943829U;
unsigned short var_2 = (unsigned short)63642;
unsigned int var_3 = 484096651U;
unsigned int var_5 = 249521990U;
_Bool var_6 = (_Bool)1;
short var_8 = (short)8471;
int var_9 = 336059213;
signed char var_10 = (signed char)-92;
int var_11 = 64606444;
int zero = 0;
int var_12 = -2080345831;
_Bool var_13 = (_Bool)1;
long long int var_14 = 1533731840725643961LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
