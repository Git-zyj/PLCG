#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)166;
signed char var_2 = (signed char)67;
short var_3 = (short)-28597;
long long int var_4 = 3983031287752712763LL;
long long int var_5 = -367456560996513590LL;
unsigned short var_10 = (unsigned short)39701;
int zero = 0;
long long int var_18 = 2087380629501526058LL;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)233;
unsigned int var_21 = 1579450354U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
