#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)35731;
int var_1 = 1345767866;
_Bool var_3 = (_Bool)0;
unsigned short var_14 = (unsigned short)15096;
int zero = 0;
long long int var_15 = -2703131287557310332LL;
int var_16 = 1123466088;
unsigned int var_17 = 3510770515U;
void init() {
}

void checksum() {
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
