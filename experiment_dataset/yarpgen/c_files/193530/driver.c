#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_2 = 840024594U;
int var_3 = -207833842;
unsigned long long int var_4 = 17659770305437551159ULL;
unsigned long long int var_5 = 6019312876464797137ULL;
signed char var_6 = (signed char)-42;
int var_12 = 1589845389;
unsigned char var_13 = (unsigned char)231;
int zero = 0;
unsigned char var_17 = (unsigned char)234;
short var_18 = (short)4049;
unsigned long long int var_19 = 828956992452556710ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
