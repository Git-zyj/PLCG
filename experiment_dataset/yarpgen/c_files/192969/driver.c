#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)126;
_Bool var_2 = (_Bool)0;
unsigned int var_11 = 3762375392U;
signed char var_12 = (signed char)27;
unsigned int var_15 = 4012758967U;
long long int var_16 = -4881634725043929672LL;
unsigned int var_18 = 49059533U;
int zero = 0;
int var_19 = 6069905;
int var_20 = -1670274005;
int var_21 = 1415389769;
_Bool var_22 = (_Bool)0;
unsigned short var_23 = (unsigned short)33664;
_Bool var_24 = (_Bool)0;
unsigned short var_25 = (unsigned short)32048;
unsigned long long int var_26 = 15014061466916080030ULL;
int var_27 = 629649713;
_Bool var_28 = (_Bool)1;
int arr_0 [10] [10] ;
int arr_1 [10] ;
short arr_4 [24] ;
long long int arr_5 [24] ;
unsigned short arr_2 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = -948101891;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 1128716306;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (short)-3479;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = 134303482990084465LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)23506;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
