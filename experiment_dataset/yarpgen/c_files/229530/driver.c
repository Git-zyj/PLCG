#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)1;
unsigned char var_8 = (unsigned char)161;
unsigned char var_9 = (unsigned char)158;
_Bool var_11 = (_Bool)0;
unsigned char var_13 = (unsigned char)254;
unsigned char var_15 = (unsigned char)81;
int zero = 0;
unsigned short var_16 = (unsigned short)59319;
_Bool var_17 = (_Bool)1;
long long int var_18 = -1414679598070560762LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
