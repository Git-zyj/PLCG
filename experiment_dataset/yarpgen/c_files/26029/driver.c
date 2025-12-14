#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_3 = (short)8480;
unsigned long long int var_5 = 14794952477086014185ULL;
unsigned short var_6 = (unsigned short)2679;
unsigned int var_7 = 671696276U;
_Bool var_8 = (_Bool)1;
long long int var_9 = 5504258065030265231LL;
int zero = 0;
long long int var_11 = 6076275524756439314LL;
unsigned int var_12 = 2264585117U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
