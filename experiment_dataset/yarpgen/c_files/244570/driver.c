#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)141;
unsigned long long int var_1 = 11561261932336612ULL;
unsigned short var_2 = (unsigned short)59532;
int var_3 = 1266758262;
unsigned int var_5 = 2554940120U;
unsigned short var_6 = (unsigned short)47602;
unsigned short var_7 = (unsigned short)52244;
unsigned char var_8 = (unsigned char)160;
signed char var_9 = (signed char)-108;
signed char var_10 = (signed char)-124;
unsigned long long int var_11 = 9193799384282309289ULL;
unsigned long long int var_12 = 9966430846529250245ULL;
unsigned short var_13 = (unsigned short)40114;
unsigned long long int var_14 = 4901425854339069293ULL;
signed char var_16 = (signed char)-114;
unsigned long long int var_17 = 7075722753523294588ULL;
int zero = 0;
signed char var_18 = (signed char)-99;
unsigned short var_19 = (unsigned short)8628;
unsigned short var_20 = (unsigned short)37388;
unsigned short var_21 = (unsigned short)28042;
unsigned int var_22 = 3515508666U;
unsigned int var_23 = 2211493256U;
signed char var_24 = (signed char)-94;
unsigned short var_25 = (unsigned short)23291;
unsigned long long int var_26 = 12535794124503658006ULL;
unsigned short var_27 = (unsigned short)36037;
unsigned short var_28 = (unsigned short)33676;
unsigned char var_29 = (unsigned char)108;
unsigned char var_30 = (unsigned char)68;
unsigned long long int var_31 = 2352702918376781606ULL;
unsigned short var_32 = (unsigned short)49698;
unsigned char var_33 = (unsigned char)26;
signed char var_34 = (signed char)-38;
unsigned long long int var_35 = 4182959479278529424ULL;
unsigned short arr_0 [18] [18] ;
int arr_9 [18] [18] [18] [18] ;
unsigned long long int arr_10 [18] ;
int arr_15 [17] ;
unsigned short arr_17 [17] ;
long long int arr_33 [24] [24] ;
int arr_11 [18] [18] [18] ;
signed char arr_12 [18] ;
unsigned long long int arr_13 [18] [18] ;
unsigned int arr_20 [17] ;
unsigned long long int arr_30 [17] [17] [17] [17] [17] ;
int arr_35 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)30471;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 97717796;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? 254730174141236741ULL : 7722562559659165782ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_15 [i_0] = 1868136800;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_17 [i_0] = (unsigned short)31429;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_33 [i_0] [i_1] = -8187304519562083752LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 1936078436 : 492775111;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_12 [i_0] = (signed char)-126;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_13 [i_0] [i_1] = 6990085696081651020ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_20 [i_0] = 1052972528U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_30 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? 1357205766544055697ULL : 9293109556003550358ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_35 [i_0] [i_1] = -1631844730;
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        hash(&seed, arr_30 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_35 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
