#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-683;
long long int var_5 = -2422832491101429851LL;
unsigned char var_7 = (unsigned char)210;
short var_9 = (short)224;
long long int var_10 = -4818685578278632204LL;
unsigned short var_11 = (unsigned short)4283;
unsigned char var_12 = (unsigned char)4;
long long int var_16 = -1719348708563153153LL;
long long int var_17 = -3071328449547431027LL;
int zero = 0;
long long int var_20 = 2900492514794575271LL;
_Bool var_21 = (_Bool)0;
long long int var_22 = 4039196797063260931LL;
unsigned char var_23 = (unsigned char)69;
unsigned short var_24 = (unsigned short)19816;
unsigned long long int var_25 = 7306530218618794388ULL;
_Bool var_26 = (_Bool)1;
long long int var_27 = 3869521674011530036LL;
short var_28 = (short)17649;
unsigned char var_29 = (unsigned char)106;
long long int var_30 = 3478917738021630167LL;
unsigned int var_31 = 2207115474U;
unsigned long long int var_32 = 3178157308292742316ULL;
long long int var_33 = 7955514947834546950LL;
unsigned short var_34 = (unsigned short)8807;
long long int var_35 = -1276614987036695335LL;
long long int arr_1 [23] ;
short arr_2 [23] [23] ;
unsigned long long int arr_7 [23] [23] [23] ;
short arr_9 [23] [23] [23] ;
int arr_10 [23] [23] [23] [23] ;
signed char arr_12 [23] ;
_Bool arr_16 [23] [23] [23] ;
short arr_3 [23] ;
long long int arr_4 [23] ;
short arr_17 [23] [23] ;
long long int arr_20 [23] [23] ;
unsigned short arr_27 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = -7414765642751573323LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-7379;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 16972874082835527413ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)4437 : (short)-29938;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = -1380330418;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_12 [i_0] = (signed char)30;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (short)24703;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = 7086986869951824738LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_17 [i_0] [i_1] = (short)6426;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_20 [i_0] [i_1] = (i_0 % 2 == 0) ? -6544050557613973242LL : 7937820386440704285LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_27 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)6603 : (unsigned short)21990;
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
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_20 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_27 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
