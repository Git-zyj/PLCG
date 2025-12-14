#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)240;
long long int var_3 = -4983116161563740541LL;
long long int var_4 = 2712635022636651991LL;
unsigned char var_5 = (unsigned char)127;
int var_6 = -2050100640;
int var_8 = -1813463583;
_Bool var_14 = (_Bool)0;
int zero = 0;
signed char var_16 = (signed char)-55;
_Bool var_17 = (_Bool)1;
long long int var_18 = -8405493310430899523LL;
int var_19 = -1683135358;
signed char arr_0 [11] ;
unsigned char arr_2 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (signed char)-69;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)19 : (unsigned char)54;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
