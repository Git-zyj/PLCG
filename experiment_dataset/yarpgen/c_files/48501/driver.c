#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)185;
long long int var_9 = 2389886852639510787LL;
unsigned short var_11 = (unsigned short)35128;
unsigned int var_16 = 278705809U;
unsigned char var_17 = (unsigned char)197;
long long int var_18 = -2804163402950174598LL;
_Bool var_19 = (_Bool)0;
int zero = 0;
unsigned short var_20 = (unsigned short)48671;
short var_21 = (short)6837;
unsigned short var_22 = (unsigned short)3235;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
