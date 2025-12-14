#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3772092602U;
_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)0;
_Bool var_3 = (_Bool)0;
signed char var_5 = (signed char)-109;
_Bool var_6 = (_Bool)1;
unsigned char var_7 = (unsigned char)92;
short var_8 = (short)24908;
signed char var_10 = (signed char)-113;
unsigned int var_12 = 2983429161U;
unsigned char var_13 = (unsigned char)114;
unsigned long long int var_14 = 2589201860618184660ULL;
int zero = 0;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)122;
long long int var_18 = -3093094165443913259LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
