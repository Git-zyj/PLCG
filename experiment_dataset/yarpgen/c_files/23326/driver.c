#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)113;
unsigned short var_7 = (unsigned short)61690;
int var_8 = 1816292500;
long long int var_9 = -8356985615469487234LL;
int zero = 0;
long long int var_12 = -3542042698364844524LL;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)42291;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
