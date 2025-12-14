#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)142;
unsigned char var_2 = (unsigned char)55;
unsigned long long int var_4 = 16538884461133132674ULL;
unsigned short var_6 = (unsigned short)59389;
unsigned short var_7 = (unsigned short)37287;
unsigned short var_8 = (unsigned short)53045;
unsigned char var_11 = (unsigned char)7;
short var_12 = (short)13901;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)107;
int zero = 0;
int var_17 = -1050120700;
short var_18 = (short)26048;
unsigned short var_19 = (unsigned short)16433;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)-31;
unsigned int var_22 = 2974947549U;
long long int var_23 = -8384978091913340859LL;
long long int var_24 = -7378392783333956930LL;
int var_25 = -2013095917;
unsigned int var_26 = 1393396861U;
unsigned char var_27 = (unsigned char)46;
int var_28 = 633484692;
unsigned short var_29 = (unsigned short)58957;
int var_30 = 2059067190;
unsigned short var_31 = (unsigned short)56250;
unsigned int var_32 = 3751753775U;
unsigned char arr_0 [24] ;
unsigned char arr_2 [24] ;
_Bool arr_4 [24] [24] ;
signed char arr_6 [24] [24] [24] [24] ;
short arr_7 [24] ;
signed char arr_8 [24] ;
unsigned short arr_9 [24] [24] [24] [24] [24] [24] ;
unsigned char arr_3 [24] ;
unsigned char arr_11 [24] [24] ;
unsigned short arr_16 [14] ;
unsigned long long int arr_21 [19] ;
unsigned short arr_22 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (unsigned char)86;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (unsigned char)175;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (signed char)92;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = (short)-10511;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = (signed char)85;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)12824;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (unsigned char)223;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned char)216;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? (unsigned short)37478 : (unsigned short)35885;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_21 [i_0] = (i_0 % 2 == 0) ? 921166282649161542ULL : 11384359534436289625ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_22 [i_0] = (i_0 % 2 == 0) ? (unsigned short)1907 : (unsigned short)39466;
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
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_22 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
