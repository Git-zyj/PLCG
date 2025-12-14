#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3152691694386341161ULL;
unsigned int var_1 = 3475266948U;
_Bool var_2 = (_Bool)1;
unsigned char var_5 = (unsigned char)74;
short var_7 = (short)-18196;
unsigned int var_8 = 3985596199U;
unsigned char var_9 = (unsigned char)181;
_Bool var_12 = (_Bool)0;
unsigned int var_16 = 2890479714U;
int zero = 0;
unsigned int var_17 = 3258789979U;
_Bool var_18 = (_Bool)0;
short var_19 = (short)-10933;
_Bool var_20 = (_Bool)1;
short var_21 = (short)-8314;
unsigned char var_22 = (unsigned char)76;
unsigned short arr_0 [18] ;
unsigned long long int arr_2 [13] ;
_Bool arr_3 [13] ;
unsigned short arr_5 [13] ;
_Bool arr_6 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (unsigned short)39532;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 14623826072887965562ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned short)21922 : (unsigned short)29462;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
