#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)242;
unsigned long long int var_1 = 2316579656385535739ULL;
unsigned char var_2 = (unsigned char)138;
unsigned char var_3 = (unsigned char)2;
unsigned short var_4 = (unsigned short)7512;
unsigned long long int var_5 = 1891009765583149241ULL;
_Bool var_6 = (_Bool)1;
unsigned char var_7 = (unsigned char)4;
unsigned short var_8 = (unsigned short)17967;
unsigned short var_9 = (unsigned short)65070;
short var_10 = (short)-4314;
unsigned char var_11 = (unsigned char)12;
short var_12 = (short)-24607;
unsigned char var_13 = (unsigned char)186;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)26660;
unsigned short var_16 = (unsigned short)57719;
unsigned short var_17 = (unsigned short)50225;
unsigned char var_18 = (unsigned char)98;
unsigned char var_19 = (unsigned char)74;
unsigned short arr_0 [20] ;
unsigned char arr_1 [20] ;
unsigned long long int arr_2 [20] [20] ;
unsigned char arr_3 [20] ;
_Bool arr_6 [20] ;
unsigned char arr_7 [20] ;
unsigned short arr_8 [20] ;
unsigned short arr_9 [20] [20] ;
_Bool arr_10 [20] ;
unsigned long long int arr_11 [20] [20] ;
unsigned long long int arr_12 [20] [20] ;
unsigned char arr_14 [20] [20] [20] ;
unsigned short arr_4 [20] ;
unsigned short arr_13 [20] [20] ;
_Bool arr_16 [20] [20] [20] ;
unsigned short arr_17 [20] ;
unsigned char arr_20 [20] ;
unsigned long long int arr_21 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (unsigned short)39844;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (unsigned char)3;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = 10843821451864631316ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (unsigned char)5;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = (unsigned char)223;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = (unsigned short)51895;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned short)1166;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_10 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_11 [i_0] [i_1] = 5992016249900197273ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_12 [i_0] [i_1] = 11922524953468248421ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (unsigned char)130;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (unsigned short)19674;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_13 [i_0] [i_1] = (unsigned short)2984;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_17 [i_0] = (unsigned short)21165;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_20 [i_0] = (unsigned char)117;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_21 [i_0] [i_1] = 2492534338635029722ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_16 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_21 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
