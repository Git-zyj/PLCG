#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)13410;
unsigned short var_1 = (unsigned short)33452;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 314136072U;
unsigned int var_7 = 2225839695U;
short var_9 = (short)-16592;
long long int var_10 = 5243121614114845803LL;
unsigned char var_14 = (unsigned char)132;
unsigned long long int var_15 = 12735399705438650827ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)25254;
short var_21 = (short)12319;
short var_22 = (short)10868;
short var_23 = (short)-31470;
unsigned char var_24 = (unsigned char)110;
_Bool var_25 = (_Bool)0;
long long int var_26 = 1580611014956074729LL;
signed char var_27 = (signed char)87;
int var_28 = 1316006241;
unsigned short var_29 = (unsigned short)44820;
unsigned short arr_0 [22] ;
unsigned char arr_1 [22] [22] ;
unsigned long long int arr_3 [16] ;
short arr_5 [16] ;
signed char arr_2 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (unsigned short)59153;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)108;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 18253942606050252755ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (short)-14230;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (signed char)94;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
