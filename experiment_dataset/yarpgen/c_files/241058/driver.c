#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-28099;
signed char var_3 = (signed char)22;
unsigned char var_4 = (unsigned char)47;
short var_5 = (short)8072;
signed char var_6 = (signed char)-87;
short var_7 = (short)6088;
long long int var_11 = -1207187862026753706LL;
unsigned long long int var_12 = 11950709560321464319ULL;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)74;
long long int var_15 = 1037909886280199472LL;
unsigned char var_16 = (unsigned char)162;
int var_19 = -2135154879;
int zero = 0;
unsigned char var_20 = (unsigned char)107;
unsigned short var_21 = (unsigned short)51443;
unsigned long long int var_22 = 5641249286078521732ULL;
long long int var_23 = -646919383742605609LL;
_Bool var_24 = (_Bool)1;
unsigned long long int var_25 = 3439726019363906323ULL;
int var_26 = -663801729;
int var_27 = -1877408844;
int var_28 = -1560070425;
unsigned short var_29 = (unsigned short)50576;
short arr_1 [15] ;
long long int arr_4 [19] ;
long long int arr_8 [12] ;
short arr_9 [12] [12] ;
unsigned char arr_12 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (short)11798;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = -3422867554426946069LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? -291619849266605024LL : 2097910757803215991LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)19289 : (short)-6822;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_12 [i_0] = (unsigned char)165;
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
