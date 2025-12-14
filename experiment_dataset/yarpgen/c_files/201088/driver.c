#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned short var_3 = (unsigned short)42951;
unsigned short var_4 = (unsigned short)45915;
signed char var_5 = (signed char)-87;
short var_8 = (short)20889;
unsigned short var_13 = (unsigned short)15666;
int zero = 0;
unsigned short var_14 = (unsigned short)60319;
long long int var_15 = 8993373012049247523LL;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
