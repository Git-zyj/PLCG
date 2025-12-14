#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)68;
int var_1 = -884868462;
unsigned char var_2 = (unsigned char)194;
short var_3 = (short)-1855;
unsigned long long int var_4 = 9651916624472862692ULL;
signed char var_5 = (signed char)-16;
unsigned char var_6 = (unsigned char)50;
unsigned long long int var_7 = 15699945215816673465ULL;
unsigned short var_8 = (unsigned short)3059;
long long int var_9 = -1851155684819322724LL;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)61398;
long long int var_12 = -2864551058057794545LL;
unsigned short var_13 = (unsigned short)41345;
unsigned long long int var_14 = 1334107582339266351ULL;
signed char var_15 = (signed char)103;
short var_16 = (short)-2611;
short var_17 = (short)26460;
int zero = 0;
unsigned char var_18 = (unsigned char)31;
long long int var_19 = 3596812744402607428LL;
signed char var_20 = (signed char)58;
unsigned short var_21 = (unsigned short)3528;
int var_22 = -1296806932;
short var_23 = (short)-21834;
short var_24 = (short)-16734;
int var_25 = 1156985383;
signed char var_26 = (signed char)98;
unsigned short var_27 = (unsigned short)43115;
signed char var_28 = (signed char)-6;
signed char var_29 = (signed char)-4;
short var_30 = (short)-1177;
long long int var_31 = 5248539433378276392LL;
unsigned int var_32 = 796258108U;
unsigned int var_33 = 2293032848U;
unsigned long long int var_34 = 16944710320191787911ULL;
unsigned int var_35 = 2324231693U;
short var_36 = (short)-10473;
unsigned long long int arr_1 [22] [22] ;
short arr_2 [22] ;
long long int arr_3 [22] [22] [22] ;
long long int arr_4 [22] ;
unsigned long long int arr_6 [22] [22] [22] ;
signed char arr_7 [22] [22] [22] ;
unsigned char arr_8 [22] [22] ;
unsigned long long int arr_9 [22] [22] [22] [22] [22] ;
short arr_10 [22] [22] [22] [22] [22] ;
unsigned char arr_12 [22] [22] [22] [22] [22] [22] [22] ;
_Bool arr_20 [24] ;
unsigned long long int arr_23 [17] ;
long long int arr_31 [17] ;
unsigned short arr_5 [22] ;
unsigned long long int arr_13 [22] [22] [22] ;
signed char arr_22 [24] ;
int arr_25 [17] ;
unsigned long long int arr_43 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = 7241455193447367320ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (short)24780;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = -4228882530782212920LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = 4235203979681147901LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 17155146887115720445ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)101 : (signed char)22;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned char)14;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] = 4169340547210386954ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (short)-1079 : (short)19877;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 22; ++i_6) 
                                arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (unsigned char)26;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_20 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_23 [i_0] = 9150112727510704063ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_31 [i_0] = (i_0 % 2 == 0) ? -4262776872099614316LL : -1645087966875983166LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (unsigned short)51537;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 14679985106247114765ULL : 14178473643921974463ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_22 [i_0] = (signed char)-50;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_25 [i_0] = (i_0 % 2 == 0) ? -1270742436 : 191970428;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_43 [i_0] [i_1] = (i_1 % 2 == 0) ? 17656845698576603652ULL : 6418456943547841336ULL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_25 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_43 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
