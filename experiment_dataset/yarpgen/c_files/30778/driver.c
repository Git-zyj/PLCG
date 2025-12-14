#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 18384255723601978768ULL;
unsigned long long int var_1 = 10511586406770539441ULL;
signed char var_3 = (signed char)30;
long long int var_5 = 6602841273656703556LL;
short var_6 = (short)15157;
unsigned char var_7 = (unsigned char)138;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)45919;
signed char var_17 = (signed char)22;
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
