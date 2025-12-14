#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17451295069443556643ULL;
unsigned int var_2 = 216126569U;
short var_4 = (short)-30336;
_Bool var_5 = (_Bool)0;
unsigned int var_7 = 3066276508U;
int var_8 = -1320365504;
int var_9 = -472398142;
unsigned int var_10 = 346901433U;
unsigned short var_11 = (unsigned short)36051;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 1886015555U;
unsigned long long int var_14 = 4404747380470131099ULL;
signed char var_15 = (signed char)37;
unsigned short var_16 = (unsigned short)45494;
unsigned short var_17 = (unsigned short)37026;
unsigned char var_18 = (unsigned char)21;
int var_19 = -1747707770;
int var_20 = -304853254;
unsigned long long int var_21 = 3382324869464650782ULL;
unsigned long long int var_22 = 457571121861222785ULL;
short var_23 = (short)-7652;
unsigned short var_24 = (unsigned short)52864;
unsigned int var_25 = 2331505271U;
signed char var_26 = (signed char)117;
unsigned long long int arr_0 [14] ;
unsigned int arr_1 [14] ;
unsigned int arr_2 [15] ;
unsigned short arr_3 [15] ;
unsigned int arr_10 [15] ;
unsigned char arr_11 [15] [15] [15] ;
unsigned long long int arr_16 [20] ;
unsigned short arr_17 [20] [20] ;
unsigned short arr_4 [15] ;
unsigned int arr_13 [15] [15] [15] [15] ;
unsigned int arr_14 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 1902037098947972995ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 3457124836U : 2888899410U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 1599461616U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (unsigned short)62598;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? 856718189U : 1530271668U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)193 : (unsigned char)85;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? 6301116008064135048ULL : 14907183394669448378ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_17 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)36822 : (unsigned short)32847;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (unsigned short)925;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 2935571325U : 241947684U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_14 [i_0] [i_1] = (i_0 % 2 == 0) ? 3532739310U : 3947849822U;
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
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    hash(&seed, arr_13 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
