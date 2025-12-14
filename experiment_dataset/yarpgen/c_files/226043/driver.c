#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_1 = (signed char)-52;
long long int var_2 = -2883049510100398164LL;
unsigned long long int var_3 = 13137194724795478917ULL;
long long int var_4 = -888792855883592386LL;
short var_5 = (short)-2626;
short var_6 = (short)-17523;
signed char var_8 = (signed char)-34;
int var_10 = -655131636;
unsigned short var_11 = (unsigned short)24529;
int zero = 0;
short var_12 = (short)-28616;
int var_13 = -64262075;
unsigned short var_14 = (unsigned short)23417;
unsigned short var_15 = (unsigned short)26481;
unsigned short var_16 = (unsigned short)54077;
unsigned char var_17 = (unsigned char)108;
unsigned short var_18 = (unsigned short)65500;
unsigned long long int var_19 = 11256457045549810291ULL;
long long int var_20 = 6457373775537452765LL;
short var_21 = (short)-32128;
unsigned short var_22 = (unsigned short)52923;
unsigned long long int arr_1 [15] ;
unsigned long long int arr_4 [17] [17] ;
unsigned int arr_5 [17] [17] ;
signed char arr_13 [15] ;
unsigned int arr_22 [15] [15] [15] [15] [15] ;
signed char arr_2 [15] ;
short arr_3 [15] ;
long long int arr_6 [17] ;
unsigned long long int arr_11 [15] ;
unsigned char arr_14 [15] [15] ;
signed char arr_23 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 8061443061180564905ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = 8951474512671774202ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = 2134886014U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_13 [i_0] = (signed char)-88;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? 2883643916U : 2586976536U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (signed char)97;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (short)-2815;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = -8578734039122839779LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_11 [i_0] = 3948592249389929146ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_14 [i_0] [i_1] = (unsigned char)178;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_23 [i_0] = (i_0 % 2 == 0) ? (signed char)-27 : (signed char)-41;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_23 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
