#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-15932;
signed char var_1 = (signed char)-31;
unsigned int var_2 = 848652244U;
unsigned int var_3 = 2643627080U;
int var_4 = 1592457302;
unsigned long long int var_5 = 9848850589877042682ULL;
signed char var_7 = (signed char)8;
unsigned char var_10 = (unsigned char)71;
int zero = 0;
unsigned int var_11 = 3880704911U;
signed char var_12 = (signed char)63;
long long int var_13 = 7323460000206799128LL;
unsigned short var_14 = (unsigned short)7034;
signed char var_15 = (signed char)54;
long long int var_16 = 5615973536486418378LL;
signed char var_17 = (signed char)-49;
signed char var_18 = (signed char)-8;
short var_19 = (short)-5202;
unsigned int var_20 = 992449077U;
unsigned int var_21 = 3004961566U;
unsigned int var_22 = 1035330123U;
long long int var_23 = 2029447730506556807LL;
unsigned int var_24 = 3509920050U;
unsigned int var_25 = 4092673883U;
unsigned short var_26 = (unsigned short)64038;
int var_27 = -1878740478;
long long int var_28 = -6507654786466828723LL;
_Bool var_29 = (_Bool)0;
unsigned char var_30 = (unsigned char)95;
int var_31 = 1691482206;
unsigned int var_32 = 2747857152U;
unsigned short arr_0 [15] ;
long long int arr_1 [15] ;
unsigned int arr_4 [18] ;
unsigned short arr_5 [18] ;
short arr_8 [18] [18] ;
_Bool arr_9 [18] [18] [18] ;
signed char arr_14 [18] [18] [18] [18] ;
unsigned int arr_16 [18] [18] [18] [18] ;
int arr_19 [14] [14] ;
signed char arr_2 [15] ;
signed char arr_3 [15] ;
unsigned int arr_6 [18] ;
unsigned short arr_7 [18] ;
unsigned char arr_11 [18] [18] ;
unsigned char arr_21 [14] ;
unsigned int arr_26 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (unsigned short)50820;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = -4390150687894382255LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = 3522330269U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (unsigned short)48005;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_8 [i_0] [i_1] = (short)-32167;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (signed char)60;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 3886185792U : 2240934811U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_19 [i_0] [i_1] = 956580683;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (signed char)98;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (signed char)-43;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = 1868980479U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = (unsigned short)8579;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_11 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)5 : (unsigned char)135;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_21 [i_0] = (i_0 % 2 == 0) ? (unsigned char)18 : (unsigned char)116;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_26 [i_0] = 3579650315U;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_26 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
