#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned char var_4 = (unsigned char)210;
int var_5 = -1773774599;
unsigned char var_6 = (unsigned char)133;
_Bool var_8 = (_Bool)1;
int zero = 0;
unsigned int var_10 = 1899156897U;
long long int var_11 = -6351304332955342767LL;
unsigned char var_12 = (unsigned char)97;
int var_13 = 2049820976;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)30;
_Bool arr_1 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
