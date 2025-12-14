#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2812276215U;
long long int var_7 = 8537449360562332015LL;
unsigned short var_11 = (unsigned short)8714;
unsigned long long int var_13 = 6068224659086408600ULL;
_Bool var_15 = (_Bool)1;
long long int var_17 = -2194402071438317841LL;
unsigned int var_19 = 3614404318U;
int zero = 0;
unsigned short var_20 = (unsigned short)13815;
_Bool var_21 = (_Bool)0;
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
