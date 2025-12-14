#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)60834;
int var_4 = -435630299;
int var_5 = -1432246684;
short var_7 = (short)16680;
unsigned short var_10 = (unsigned short)32690;
unsigned short var_13 = (unsigned short)32667;
int zero = 0;
_Bool var_15 = (_Bool)0;
long long int var_16 = 6218189866153208625LL;
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
