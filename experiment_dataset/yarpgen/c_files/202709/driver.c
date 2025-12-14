#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int var_2 = -199240602;
int var_7 = 200245440;
int var_15 = 541135268;
int var_16 = 451284771;
int var_18 = -349710851;
int zero = 0;
long long int var_19 = 7362928693021851589LL;
unsigned short var_20 = (unsigned short)64306;
short var_21 = (short)3333;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
