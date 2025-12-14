#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -568263912;
long long int var_3 = -4541217946847213866LL;
signed char var_7 = (signed char)-11;
signed char var_8 = (signed char)5;
unsigned long long int var_11 = 4791769470562878507ULL;
unsigned long long int var_14 = 13144248594765394090ULL;
int var_15 = 1207844352;
int zero = 0;
_Bool var_16 = (_Bool)1;
int var_17 = -940885747;
void init() {
}

void checksum() {
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
