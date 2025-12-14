#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 12801172929041592545ULL;
unsigned short var_4 = (unsigned short)56922;
long long int var_7 = -3448993248572301236LL;
unsigned char var_8 = (unsigned char)40;
_Bool var_10 = (_Bool)0;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned char var_16 = (unsigned char)254;
_Bool var_17 = (_Bool)0;
unsigned char var_18 = (unsigned char)83;
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
