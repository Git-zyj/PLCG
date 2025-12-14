#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
_Bool var_4 = (_Bool)0;
unsigned long long int var_7 = 16322287216887391801ULL;
long long int var_8 = -7470298667584230640LL;
unsigned long long int var_12 = 5951441541421304282ULL;
int zero = 0;
short var_13 = (short)-8076;
unsigned long long int var_14 = 5670638423712062300ULL;
long long int var_15 = 4629805674882714863LL;
unsigned int var_16 = 3991909612U;
unsigned char var_17 = (unsigned char)202;
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
