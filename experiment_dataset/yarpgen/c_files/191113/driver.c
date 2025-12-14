#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -2312509341624169454LL;
unsigned int var_5 = 3941674999U;
short var_12 = (short)-16974;
long long int var_14 = 1345135598956425715LL;
short var_15 = (short)-10768;
int zero = 0;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)-94;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
