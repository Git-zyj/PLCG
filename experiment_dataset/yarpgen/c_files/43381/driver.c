#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 297365754U;
long long int var_1 = -7163617828417390181LL;
unsigned char var_3 = (unsigned char)13;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 5874110383799498426ULL;
unsigned short var_8 = (unsigned short)3264;
unsigned short var_12 = (unsigned short)62274;
int zero = 0;
unsigned int var_13 = 1530860657U;
signed char var_14 = (signed char)-31;
unsigned int var_15 = 3648325556U;
unsigned short var_16 = (unsigned short)12147;
unsigned short var_17 = (unsigned short)48476;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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
