#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)65;
_Bool var_3 = (_Bool)0;
unsigned long long int var_5 = 6853990722107428888ULL;
int var_8 = -376736745;
unsigned char var_10 = (unsigned char)21;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)92;
unsigned char var_13 = (unsigned char)220;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)52122;
unsigned long long int var_16 = 16640442507186532543ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)9448;
unsigned char var_21 = (unsigned char)23;
_Bool var_22 = (_Bool)1;
unsigned char var_23 = (unsigned char)93;
unsigned char var_24 = (unsigned char)227;
_Bool var_25 = (_Bool)0;
unsigned short var_26 = (unsigned short)22263;
unsigned short var_27 = (unsigned short)45874;
int arr_0 [11] ;
unsigned long long int arr_1 [11] [11] ;
int arr_3 [11] ;
int arr_6 [11] ;
unsigned long long int arr_9 [10] ;
_Bool arr_11 [10] ;
_Bool arr_13 [10] [10] ;
unsigned long long int arr_7 [11] ;
unsigned short arr_16 [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 2136460930;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = 17670628610548003237ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = 331986782;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = -1083304349;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 12897812204980556089ULL : 8355304991097963736ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_13 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = 5580671480603734682ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)21417 : (unsigned short)56490;
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_16 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
