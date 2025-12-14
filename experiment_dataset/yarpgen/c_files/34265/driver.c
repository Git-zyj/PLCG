#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)123;
signed char var_1 = (signed char)112;
unsigned char var_2 = (unsigned char)69;
_Bool var_4 = (_Bool)1;
short var_5 = (short)-28628;
short var_6 = (short)432;
unsigned char var_7 = (unsigned char)13;
unsigned int var_8 = 84133370U;
signed char var_9 = (signed char)102;
short var_10 = (short)3403;
signed char var_11 = (signed char)29;
short var_12 = (short)21608;
int zero = 0;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 4772653726913419606ULL;
unsigned char var_16 = (unsigned char)204;
int var_17 = 710652032;
unsigned short var_18 = (unsigned short)52465;
unsigned char var_19 = (unsigned char)222;
unsigned char var_20 = (unsigned char)233;
signed char var_21 = (signed char)-19;
int var_22 = -182573219;
short var_23 = (short)20987;
long long int var_24 = -1586687977685342468LL;
_Bool var_25 = (_Bool)1;
unsigned int var_26 = 2346188848U;
unsigned char var_27 = (unsigned char)120;
_Bool var_28 = (_Bool)1;
long long int var_29 = -5977715923753379804LL;
unsigned char var_30 = (unsigned char)91;
short var_31 = (short)-12074;
int arr_0 [18] ;
signed char arr_1 [18] ;
unsigned char arr_3 [13] ;
_Bool arr_4 [13] ;
short arr_5 [13] ;
_Bool arr_6 [13] [13] ;
unsigned char arr_7 [13] [13] ;
unsigned char arr_8 [13] ;
unsigned char arr_10 [13] [13] ;
unsigned char arr_11 [13] ;
unsigned char arr_12 [13] ;
unsigned long long int arr_13 [19] ;
short arr_15 [19] ;
unsigned int arr_17 [19] [19] ;
_Bool arr_20 [19] [19] [19] [19] ;
unsigned long long int arr_2 [18] [18] ;
int arr_9 [13] ;
unsigned long long int arr_21 [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = -1523055797;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (signed char)-117;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (unsigned char)65;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (short)-32201;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)77;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (unsigned char)54 : (unsigned char)31;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned char)218;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_11 [i_0] = (unsigned char)25;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_12 [i_0] = (unsigned char)88;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_13 [i_0] = 14378835643820167383ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_15 [i_0] = (short)-17387;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_17 [i_0] [i_1] = 2938797651U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = 2262315986180988675ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? -1080870907 : -2636931;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 528595583900952842ULL : 8908400799286510024ULL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_21 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
