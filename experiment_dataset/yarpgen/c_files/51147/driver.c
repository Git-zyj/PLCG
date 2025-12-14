#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2723226598746119492LL;
unsigned char var_1 = (unsigned char)65;
signed char var_2 = (signed char)-77;
long long int var_4 = -4743936619039117655LL;
int var_5 = -1861540774;
long long int var_6 = -8279909189936726347LL;
unsigned char var_7 = (unsigned char)81;
long long int var_9 = -6402882026099391030LL;
unsigned long long int var_10 = 1179026271971183868ULL;
unsigned int var_11 = 3494917994U;
long long int var_12 = -1863820266139556139LL;
unsigned int var_13 = 1589815395U;
unsigned long long int var_14 = 13344097675272277091ULL;
unsigned short var_15 = (unsigned short)54900;
int zero = 0;
unsigned short var_16 = (unsigned short)27995;
signed char var_17 = (signed char)-71;
int var_18 = 476361637;
signed char var_19 = (signed char)50;
int var_20 = 838513211;
long long int var_21 = -8940977412862389871LL;
unsigned short var_22 = (unsigned short)57000;
int var_23 = -1975069779;
unsigned long long int var_24 = 3808243559342124872ULL;
signed char var_25 = (signed char)45;
int var_26 = -1271036770;
unsigned short var_27 = (unsigned short)17989;
_Bool arr_0 [23] [23] ;
unsigned short arr_1 [23] [23] ;
int arr_3 [23] [23] [23] ;
signed char arr_4 [23] [23] [23] [23] ;
int arr_10 [23] [23] [23] [23] [23] [23] [23] ;
unsigned int arr_13 [23] [23] ;
unsigned long long int arr_14 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)33332;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = -450970527;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_4 [i_0] [i_1] [i_2] [i_3] = (signed char)-85;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 23; ++i_6) 
                                arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_4 % 2 == 0) ? 1841531106 : -506988305;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_13 [i_0] [i_1] = 366254989U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? 12082538936850676698ULL : 1873061259506045491ULL;
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
