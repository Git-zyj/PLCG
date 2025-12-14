#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)1486;
int var_2 = -1076854922;
short var_3 = (short)-15814;
signed char var_4 = (signed char)-40;
short var_5 = (short)-21863;
short var_6 = (short)17961;
unsigned int var_7 = 2104447845U;
signed char var_8 = (signed char)-53;
unsigned short var_9 = (unsigned short)16155;
int zero = 0;
long long int var_10 = -2676156814937355198LL;
short var_11 = (short)10927;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)19;
unsigned short var_14 = (unsigned short)17169;
unsigned long long int var_15 = 280926200005338659ULL;
unsigned long long int var_16 = 12795377278781248631ULL;
unsigned int var_17 = 1628327637U;
long long int var_18 = -6243021770084024451LL;
unsigned char var_19 = (unsigned char)31;
short var_20 = (short)3907;
unsigned long long int var_21 = 17729802574800281608ULL;
long long int var_22 = -295373285442512547LL;
unsigned long long int var_23 = 4897629583426269456ULL;
long long int var_24 = 2973152049131064376LL;
int var_25 = -297554397;
int var_26 = -2140758012;
_Bool var_27 = (_Bool)0;
signed char var_28 = (signed char)83;
_Bool var_29 = (_Bool)0;
long long int var_30 = -2596587930904002374LL;
_Bool var_31 = (_Bool)0;
unsigned long long int var_32 = 11706570305266686583ULL;
unsigned int arr_0 [23] ;
long long int arr_1 [23] ;
short arr_4 [24] ;
unsigned long long int arr_5 [24] ;
short arr_6 [24] ;
_Bool arr_7 [24] [24] ;
unsigned long long int arr_10 [24] [24] [24] [24] [24] ;
short arr_11 [24] [24] [24] [24] ;
unsigned long long int arr_12 [24] [24] ;
long long int arr_15 [24] [24] [24] ;
unsigned int arr_26 [24] [24] ;
unsigned long long int arr_27 [24] [24] ;
signed char arr_31 [24] [24] [24] [24] [24] ;
_Bool arr_36 [24] [24] [24] [24] [24] [24] ;
_Bool arr_38 [24] [24] [24] [24] [24] ;
unsigned char arr_41 [25] [25] ;
int arr_42 [25] ;
int arr_2 [23] ;
unsigned long long int arr_13 [24] [24] ;
short arr_14 [24] [24] [24] [24] [24] ;
unsigned char arr_23 [24] ;
signed char arr_39 [24] ;
unsigned char arr_40 [24] ;
long long int arr_44 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 422786617U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = -3900354604300175434LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (short)-31483;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = 8791189403304072271ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (short)3322;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_7 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = 7065354445703612467ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (short)-1832;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_12 [i_0] [i_1] = 6248178264265723446ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -6133282405657180577LL : 5160411857533236457LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_26 [i_0] [i_1] = 1496288035U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_27 [i_0] [i_1] = 15639323608521543378ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_31 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)79;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            arr_36 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_38 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_41 [i_0] [i_1] = (unsigned char)156;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_42 [i_0] = 1660207051;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 1623451629;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_13 [i_0] [i_1] = 7092706864251500065ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)-32528;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_23 [i_0] = (i_0 % 2 == 0) ? (unsigned char)104 : (unsigned char)82;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_39 [i_0] = (signed char)-13;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_40 [i_0] = (unsigned char)191;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_44 [i_0] = -5744240368166065997LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        hash(&seed, arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_39 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_40 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_44 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
