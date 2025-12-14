#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)30741;
long long int var_6 = 3112054653908776883LL;
long long int var_8 = 9165880149737928207LL;
unsigned long long int var_9 = 428523422297807692ULL;
unsigned short var_10 = (unsigned short)29621;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)1;
int var_13 = -820621657;
int zero = 0;
unsigned int var_14 = 56166218U;
long long int var_15 = 8150278664239084344LL;
_Bool var_16 = (_Bool)0;
short var_17 = (short)13245;
unsigned short var_18 = (unsigned short)10846;
unsigned long long int arr_2 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = 15906961982223723630ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
