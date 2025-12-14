#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7849741858709527565LL;
unsigned long long int var_2 = 7185881029041441806ULL;
_Bool var_4 = (_Bool)0;
_Bool var_6 = (_Bool)1;
unsigned char var_8 = (unsigned char)87;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)19744;
unsigned short var_14 = (unsigned short)41741;
int zero = 0;
signed char var_15 = (signed char)96;
long long int var_16 = 2019342625793981402LL;
unsigned long long int var_17 = 9358113014540282666ULL;
long long int var_18 = -5907310831518349397LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
