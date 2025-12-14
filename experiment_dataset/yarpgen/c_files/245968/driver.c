#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_1 = (unsigned short)16172;
_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)55109;
signed char var_4 = (signed char)47;
long long int var_5 = -5607799525557364081LL;
long long int var_6 = 1667299829761159150LL;
signed char var_7 = (signed char)-12;
signed char var_8 = (signed char)-35;
long long int var_9 = 7718723800453520259LL;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 2081620732U;
long long int var_12 = -5264244945516199395LL;
unsigned short var_13 = (unsigned short)2329;
unsigned short var_14 = (unsigned short)51316;
int var_15 = -1184340155;
unsigned int var_16 = 13317732U;
signed char var_17 = (signed char)66;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 234998072U;
int var_20 = 1112059817;
unsigned char var_21 = (unsigned char)143;
long long int var_22 = 7593494617422539783LL;
unsigned int var_23 = 3940078300U;
unsigned int var_24 = 3696045595U;
unsigned long long int var_25 = 10198841663910570687ULL;
_Bool var_26 = (_Bool)1;
long long int var_27 = 2763730383459910461LL;
unsigned long long int var_28 = 4403562192101300753ULL;
unsigned int var_29 = 1034736845U;
_Bool arr_0 [19] ;
int arr_1 [19] [19] ;
int arr_3 [19] [19] ;
_Bool arr_4 [19] [19] [19] ;
signed char arr_5 [19] [19] [19] ;
signed char arr_6 [19] ;
unsigned int arr_7 [19] [19] [19] [19] ;
long long int arr_8 [19] [19] ;
_Bool arr_9 [19] [19] [19] ;
signed char arr_10 [19] ;
unsigned char arr_12 [19] [19] ;
unsigned char arr_15 [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = -1995686271;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = -416583093;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)91 : (signed char)75;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (signed char)114;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 1091802587U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? 8698236465296794183LL : 5256427476555559658LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_10 [i_0] = (signed char)59;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_12 [i_0] [i_1] = (unsigned char)39;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)85 : (unsigned char)112;
}

void checksum() {
    hash(&seed, var_10);
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
