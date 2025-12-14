#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_6 = (_Bool)1;
signed char var_9 = (signed char)91;
unsigned short var_10 = (unsigned short)22284;
_Bool var_11 = (_Bool)0;
unsigned int var_13 = 582380660U;
signed char var_16 = (signed char)58;
int zero = 0;
long long int var_19 = -5516305199946491921LL;
unsigned char var_20 = (unsigned char)160;
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
