#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned char var_2 = (unsigned char)142;
int var_3 = 782223942;
signed char var_4 = (signed char)82;
long long int var_6 = -3970272672126596591LL;
long long int var_8 = 8660723545539455503LL;
short var_11 = (short)29499;
unsigned short var_12 = (unsigned short)20048;
int zero = 0;
long long int var_16 = 5912512676999515168LL;
short var_17 = (short)24333;
unsigned char var_18 = (unsigned char)177;
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
