#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1018699564U;
_Bool var_3 = (_Bool)1;
unsigned int var_7 = 2550849120U;
long long int var_9 = 2797619792472265937LL;
int zero = 0;
long long int var_20 = -1791542769757713143LL;
unsigned char var_21 = (unsigned char)19;
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
