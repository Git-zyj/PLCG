#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)60441;
unsigned long long int var_3 = 3728012576077228630ULL;
unsigned short var_5 = (unsigned short)49268;
_Bool var_6 = (_Bool)1;
unsigned short var_7 = (unsigned short)29226;
_Bool var_9 = (_Bool)0;
int zero = 0;
long long int var_10 = -7793968234526380343LL;
unsigned char var_11 = (unsigned char)134;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
