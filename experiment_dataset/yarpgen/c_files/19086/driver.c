#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15348929003224155364ULL;
unsigned short var_1 = (unsigned short)65380;
short var_2 = (short)-165;
_Bool var_4 = (_Bool)1;
unsigned long long int var_5 = 12366848727906377093ULL;
long long int var_6 = 8454373132608018362LL;
unsigned char var_7 = (unsigned char)141;
int zero = 0;
int var_11 = 1650866865;
int var_12 = 272580791;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)46;
unsigned char var_15 = (unsigned char)32;
unsigned short var_16 = (unsigned short)50078;
_Bool var_17 = (_Bool)0;
unsigned int arr_2 [12] ;
signed char arr_3 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 1399058921U : 1115544320U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (signed char)88 : (signed char)-29;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
