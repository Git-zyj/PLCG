#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)25123;
unsigned int var_1 = 4188879526U;
long long int var_2 = 4682118486214766844LL;
_Bool var_3 = (_Bool)1;
long long int var_5 = -5692424899957460751LL;
_Bool var_6 = (_Bool)1;
int var_7 = 381235983;
unsigned short var_8 = (unsigned short)39742;
int zero = 0;
unsigned int var_10 = 1522776195U;
unsigned int var_11 = 2241764296U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
