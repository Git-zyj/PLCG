#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3226209080613222006ULL;
_Bool var_1 = (_Bool)0;
unsigned int var_2 = 1603128516U;
unsigned char var_3 = (unsigned char)118;
unsigned int var_4 = 3687447790U;
unsigned int var_8 = 1836091800U;
unsigned short var_9 = (unsigned short)1302;
short var_10 = (short)20452;
long long int var_11 = -7917734542347038135LL;
unsigned char var_12 = (unsigned char)110;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 3021760850U;
int zero = 0;
short var_17 = (short)15122;
signed char var_18 = (signed char)111;
unsigned long long int var_19 = 2989489780017809776ULL;
short var_20 = (short)8679;
int var_21 = -1204401911;
long long int var_22 = 137723591607018544LL;
long long int var_23 = -8768092516132220003LL;
short var_24 = (short)6768;
unsigned short var_25 = (unsigned short)12921;
unsigned char arr_8 [13] [13] [13] ;
unsigned int arr_9 [13] [13] ;
short arr_10 [13] [13] [13] [13] ;
unsigned short arr_13 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)137 : (unsigned char)215;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? 581485739U : 4056159911U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (short)6845 : (short)-3256;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_13 [i_0] = (unsigned short)20023;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    hash(&seed, arr_10 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
