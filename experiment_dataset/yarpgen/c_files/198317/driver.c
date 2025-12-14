#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1656240695695960994ULL;
short var_2 = (short)-31767;
unsigned char var_3 = (unsigned char)160;
unsigned int var_4 = 1942601726U;
long long int var_7 = -673250991983323696LL;
unsigned char var_10 = (unsigned char)144;
short var_13 = (short)-17164;
long long int var_14 = -6273246618035440727LL;
unsigned long long int var_16 = 5765299620809829240ULL;
int zero = 0;
long long int var_18 = -453614170623459008LL;
long long int var_19 = 1468270542517620772LL;
unsigned short var_20 = (unsigned short)43848;
long long int var_21 = -1511999424205322611LL;
long long int var_22 = -3818100115263770601LL;
long long int var_23 = -8959813056648363710LL;
long long int var_24 = -3849293379405751964LL;
long long int var_25 = -3368178147105783752LL;
int var_26 = 1314598432;
unsigned char var_27 = (unsigned char)162;
long long int var_28 = 85119949009718665LL;
unsigned long long int var_29 = 5342610085131956613ULL;
short var_30 = (short)-20597;
long long int var_31 = -6787537542609098756LL;
unsigned long long int arr_0 [25] [25] ;
long long int arr_1 [25] ;
long long int arr_4 [18] ;
long long int arr_6 [16] [16] ;
short arr_7 [16] [16] ;
short arr_9 [16] [16] ;
long long int arr_14 [11] [11] ;
unsigned char arr_15 [11] ;
int arr_2 [25] ;
unsigned char arr_5 [18] ;
unsigned char arr_10 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = 2876583236346536845ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 6751444673835665266LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = -7055838193357970962LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_6 [i_0] [i_1] = 1141980606530307979LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_7 [i_0] [i_1] = (short)13286;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_9 [i_0] [i_1] = (short)-13842;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_14 [i_0] [i_1] = 7347346783176142656LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_15 [i_0] = (unsigned char)84;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = 727237514;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (unsigned char)194;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned char)173;
}

void checksum() {
    hash(&seed, var_18);
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
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
