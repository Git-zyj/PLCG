#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)29;
int var_3 = -1533378140;
long long int var_4 = 1839349367102998683LL;
unsigned char var_5 = (unsigned char)189;
int var_6 = 415148492;
long long int var_7 = 8732802284724735707LL;
long long int var_8 = 1086226954916666878LL;
int var_9 = -82256330;
long long int var_10 = 4405015385951247304LL;
int zero = 0;
short var_11 = (short)6974;
int var_12 = -1391211985;
unsigned long long int var_13 = 2894232745738574987ULL;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)-32;
long long int var_16 = -7366595743464942080LL;
unsigned long long int var_17 = 17388008942587521170ULL;
short var_18 = (short)3939;
unsigned int var_19 = 2559202956U;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)403;
unsigned short var_22 = (unsigned short)14957;
int var_23 = 518324485;
long long int var_24 = -3829356809335889365LL;
int var_25 = -437822071;
unsigned long long int var_26 = 1697320476679193331ULL;
int arr_1 [18] ;
unsigned short arr_2 [18] ;
signed char arr_3 [18] [18] ;
int arr_4 [18] [18] [18] ;
signed char arr_6 [18] [18] [18] ;
signed char arr_8 [18] [18] [18] [18] ;
long long int arr_12 [18] [18] [18] [18] [18] ;
short arr_24 [24] ;
signed char arr_26 [24] ;
long long int arr_27 [24] [24] ;
int arr_29 [24] ;
_Bool arr_16 [14] ;
unsigned char arr_23 [14] [14] [14] [14] ;
int arr_33 [24] [24] [24] ;
signed char arr_36 [24] ;
unsigned int arr_37 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 244217624;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (unsigned short)37384;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)30;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 256482280;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (signed char)29;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (signed char)-5;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = 6205564434682136524LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_24 [i_0] = (short)-31304;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_26 [i_0] = (signed char)13;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_27 [i_0] [i_1] = -4017611612883108494LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_29 [i_0] = -1180957420;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_16 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = (unsigned char)212;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_33 [i_0] [i_1] [i_2] = 1223857990;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_36 [i_0] = (signed char)-118;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_37 [i_0] = 2637528144U;
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    hash(&seed, arr_23 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_33 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_36 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_37 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
