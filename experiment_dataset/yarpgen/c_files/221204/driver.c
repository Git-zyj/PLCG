#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13420050086229533605ULL;
short var_1 = (short)-15240;
long long int var_2 = -1661681431406754957LL;
unsigned long long int var_3 = 15568806926411609175ULL;
long long int var_4 = -6658334185853153194LL;
unsigned char var_5 = (unsigned char)175;
short var_6 = (short)-11418;
int var_7 = 118883788;
short var_8 = (short)27186;
int var_9 = -873938985;
unsigned char var_11 = (unsigned char)208;
short var_13 = (short)-21841;
int var_14 = -1565081587;
int zero = 0;
unsigned char var_16 = (unsigned char)78;
unsigned char var_17 = (unsigned char)177;
unsigned long long int var_18 = 5672179482126186447ULL;
unsigned char var_19 = (unsigned char)92;
long long int var_20 = -1923952740923604278LL;
unsigned int var_21 = 4077219177U;
unsigned long long int var_22 = 17088864015110261443ULL;
long long int var_23 = -188029362754034810LL;
int var_24 = 174273799;
long long int var_25 = -5387358073698376345LL;
short var_26 = (short)29932;
unsigned int var_27 = 4005009279U;
long long int var_28 = -8020054288192198204LL;
unsigned long long int var_29 = 7215160234074311568ULL;
long long int var_30 = -7214981582700118442LL;
unsigned int var_31 = 3283867594U;
unsigned int var_32 = 3874615595U;
unsigned long long int var_33 = 10472493064486923539ULL;
unsigned int var_34 = 785415363U;
unsigned int var_35 = 99336571U;
unsigned int var_36 = 2527338744U;
int var_37 = -1633620448;
long long int var_38 = 5512447017375659768LL;
long long int arr_0 [12] [12] ;
unsigned int arr_5 [22] ;
unsigned char arr_6 [22] [22] ;
unsigned long long int arr_8 [22] [22] [22] ;
unsigned int arr_9 [22] [22] [22] ;
unsigned char arr_12 [22] [22] [22] ;
unsigned int arr_13 [22] [22] [22] [22] ;
unsigned char arr_29 [15] [15] ;
unsigned char arr_2 [12] ;
short arr_3 [12] [12] ;
unsigned int arr_4 [12] ;
unsigned int arr_7 [22] ;
unsigned int arr_10 [22] [22] [22] ;
long long int arr_19 [22] ;
unsigned int arr_20 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = -3284030748777733118LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = 498384464U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)19;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 14015277827960068686ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 2434787785U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (unsigned char)191;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = 1749035624U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_29 [i_0] [i_1] = (unsigned char)134;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (unsigned char)21;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = (short)3745;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = 42682702U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = 516120610U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 3971280828U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_19 [i_0] = -2730247132840701526LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_20 [i_0] [i_1] = 3586406906U;
}

void checksum() {
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
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_20 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
