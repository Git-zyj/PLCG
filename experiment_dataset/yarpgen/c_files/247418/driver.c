#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2787608046U;
short var_1 = (short)30877;
_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)0;
int var_4 = 441612221;
int var_5 = -1742204431;
_Bool var_6 = (_Bool)1;
unsigned short var_10 = (unsigned short)7207;
short var_11 = (short)-4346;
int zero = 0;
_Bool var_12 = (_Bool)0;
short var_13 = (short)23542;
unsigned int var_14 = 143786703U;
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
