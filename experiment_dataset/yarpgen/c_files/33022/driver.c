#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-36;
signed char var_1 = (signed char)-78;
unsigned short var_2 = (unsigned short)49811;
_Bool var_3 = (_Bool)0;
unsigned int var_5 = 2815825182U;
unsigned int var_7 = 1029612313U;
long long int var_8 = -3943986817568673530LL;
_Bool var_9 = (_Bool)1;
unsigned char var_10 = (unsigned char)248;
int var_12 = 1011807778;
long long int var_15 = -2871509241017782933LL;
int zero = 0;
unsigned int var_18 = 3102544071U;
unsigned long long int var_19 = 1654508746575851465ULL;
unsigned char var_20 = (unsigned char)156;
unsigned char var_21 = (unsigned char)217;
signed char var_22 = (signed char)17;
unsigned short var_23 = (unsigned short)12814;
short var_24 = (short)-12081;
unsigned int var_25 = 773499136U;
int var_26 = -1609638119;
_Bool arr_0 [22] ;
unsigned int arr_4 [22] [22] [22] ;
unsigned short arr_6 [22] [22] [22] [22] ;
_Bool arr_13 [11] ;
int arr_16 [11] [11] [11] ;
unsigned int arr_17 [11] [11] [11] ;
int arr_18 [11] [11] ;
unsigned char arr_11 [22] [22] ;
long long int arr_12 [22] [22] [22] [22] ;
signed char arr_19 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 2210381958U : 740817285U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned short)57210 : (unsigned short)4619;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_13 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = 1843894646;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = 2562352922U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_18 [i_0] [i_1] = 123957047;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_11 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)243 : (unsigned char)169;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 6628389071617842618LL : -4999095587753707743LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_19 [i_0] = (signed char)-47;
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    hash(&seed, arr_12 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_19 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
