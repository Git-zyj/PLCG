#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-13178;
signed char var_2 = (signed char)127;
unsigned short var_4 = (unsigned short)40999;
unsigned short var_5 = (unsigned short)51128;
unsigned short var_6 = (unsigned short)64010;
unsigned int var_7 = 2430329438U;
short var_8 = (short)5417;
short var_9 = (short)-19542;
unsigned char var_10 = (unsigned char)203;
short var_11 = (short)11713;
short var_13 = (short)-5500;
signed char var_14 = (signed char)-43;
unsigned int var_17 = 3604246673U;
unsigned char var_18 = (unsigned char)32;
signed char var_19 = (signed char)-124;
int zero = 0;
short var_20 = (short)28883;
int var_21 = -1067576998;
short var_22 = (short)-466;
_Bool var_23 = (_Bool)1;
unsigned short var_24 = (unsigned short)41006;
unsigned long long int var_25 = 6225303105689112954ULL;
unsigned int var_26 = 2693127660U;
short var_27 = (short)11314;
_Bool var_28 = (_Bool)0;
short var_29 = (short)-14522;
short var_30 = (short)-2012;
unsigned char var_31 = (unsigned char)208;
short var_32 = (short)-19624;
unsigned char var_33 = (unsigned char)155;
_Bool var_34 = (_Bool)0;
_Bool var_35 = (_Bool)1;
unsigned int arr_0 [24] [24] ;
unsigned long long int arr_8 [19] [19] [19] [19] ;
signed char arr_11 [19] ;
unsigned int arr_13 [19] [19] [19] [19] [19] ;
_Bool arr_25 [10] ;
short arr_2 [24] ;
unsigned int arr_10 [19] [19] [19] ;
unsigned char arr_15 [19] [19] ;
unsigned long long int arr_19 [22] ;
unsigned short arr_27 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? 1162322395U : 3153257368U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 7325178878065035295ULL : 9965409247776497981ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (signed char)-118 : (signed char)-11;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? 4016938901U : 643025904U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_25 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (short)12513 : (short)-27965;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 773956903U : 3254067347U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_15 [i_0] [i_1] = (unsigned char)134;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_19 [i_0] = 17193176717338349701ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_27 [i_0] = (i_0 % 2 == 0) ? (unsigned short)4189 : (unsigned short)35202;
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_27 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
