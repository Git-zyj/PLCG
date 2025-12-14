#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2035562774243143371ULL;
unsigned char var_2 = (unsigned char)22;
unsigned int var_3 = 2005072147U;
unsigned short var_4 = (unsigned short)29688;
unsigned char var_5 = (unsigned char)251;
unsigned int var_6 = 13868120U;
unsigned short var_7 = (unsigned short)43849;
unsigned int var_8 = 3425591948U;
unsigned int var_9 = 327584079U;
unsigned long long int var_10 = 17385355690982469908ULL;
unsigned int var_11 = 1137806787U;
short var_12 = (short)-2780;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 2995255251168457360ULL;
short var_16 = (short)-20474;
long long int var_17 = -1890364349095907019LL;
_Bool var_18 = (_Bool)1;
int zero = 0;
unsigned long long int var_19 = 8899193935781671460ULL;
_Bool var_20 = (_Bool)1;
int arr_3 [14] [14] ;
unsigned char arr_4 [14] [14] ;
unsigned long long int arr_7 [14] [14] ;
unsigned char arr_8 [14] [14] [14] ;
unsigned int arr_9 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = -1182462770;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)154;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? 471903715599848578ULL : 7194781693404887469ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)188 : (unsigned char)125;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_9 [i_0] = 3861241782U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
