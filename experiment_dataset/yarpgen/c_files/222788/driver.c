#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 4295998486343879780ULL;
unsigned char var_10 = (unsigned char)248;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)46025;
unsigned char var_16 = (unsigned char)246;
int zero = 0;
unsigned char var_19 = (unsigned char)95;
unsigned int var_20 = 2398941917U;
unsigned int var_21 = 1033819452U;
unsigned int var_22 = 4045136155U;
_Bool var_23 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
