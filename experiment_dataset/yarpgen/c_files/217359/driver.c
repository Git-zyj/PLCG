#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)104;
_Bool var_2 = (_Bool)0;
long long int var_4 = 4060044942364717542LL;
unsigned long long int var_5 = 13964880134243009681ULL;
_Bool var_7 = (_Bool)1;
unsigned int var_8 = 744144638U;
short var_12 = (short)-5077;
_Bool var_14 = (_Bool)1;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)5;
unsigned short var_17 = (unsigned short)59025;
void init() {
}

void checksum() {
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
