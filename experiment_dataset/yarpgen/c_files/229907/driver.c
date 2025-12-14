#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2582965528838189644LL;
unsigned int var_4 = 485941195U;
_Bool var_6 = (_Bool)1;
long long int var_7 = 2314171933824240555LL;
unsigned long long int var_8 = 6302499367415604396ULL;
unsigned int var_9 = 2251124931U;
int var_10 = -196614322;
unsigned long long int var_11 = 14701759851842503901ULL;
unsigned char var_13 = (unsigned char)236;
int zero = 0;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 375461969238556354ULL;
unsigned char var_17 = (unsigned char)112;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
