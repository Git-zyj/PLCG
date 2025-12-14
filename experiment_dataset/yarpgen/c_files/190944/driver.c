#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_2 = 1530832988821720686LL;
long long int var_5 = -4432732174583992667LL;
unsigned short var_7 = (unsigned short)59484;
signed char var_12 = (signed char)85;
short var_13 = (short)-23494;
long long int var_14 = -5608166257815694134LL;
int zero = 0;
unsigned char var_15 = (unsigned char)52;
unsigned long long int var_16 = 13396820325506471588ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
