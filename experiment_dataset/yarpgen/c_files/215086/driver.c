#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
_Bool var_6 = (_Bool)0;
long long int var_7 = -2089510885055845640LL;
unsigned short var_9 = (unsigned short)3540;
unsigned char var_11 = (unsigned char)186;
int zero = 0;
unsigned char var_12 = (unsigned char)124;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)55;
long long int var_15 = -15932851905683394LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
