#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2796435570U;
signed char var_4 = (signed char)97;
_Bool var_5 = (_Bool)0;
int var_6 = -948208774;
_Bool var_8 = (_Bool)1;
int zero = 0;
short var_13 = (short)-10593;
int var_14 = 299177691;
void init() {
}

void checksum() {
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
