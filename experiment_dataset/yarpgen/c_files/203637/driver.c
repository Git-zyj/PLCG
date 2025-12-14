#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)92;
unsigned int var_2 = 4058054573U;
_Bool var_6 = (_Bool)0;
unsigned char var_7 = (unsigned char)108;
int zero = 0;
unsigned long long int var_11 = 3287394640940601426ULL;
short var_12 = (short)8405;
short var_13 = (short)26758;
void init() {
}

void checksum() {
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
