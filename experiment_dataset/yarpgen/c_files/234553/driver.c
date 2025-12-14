#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)145;
long long int var_1 = 4103014780694920752LL;
int var_2 = -1786935336;
long long int var_3 = 8823870229657243856LL;
unsigned short var_4 = (unsigned short)18771;
unsigned char var_5 = (unsigned char)134;
unsigned short var_6 = (unsigned short)14957;
unsigned short var_7 = (unsigned short)56931;
unsigned short var_8 = (unsigned short)20430;
unsigned short var_9 = (unsigned short)63543;
unsigned char var_10 = (unsigned char)251;
unsigned char var_12 = (unsigned char)38;
int var_14 = 1513188677;
int var_15 = -1855717942;
short var_16 = (short)13204;
int zero = 0;
int var_17 = -1400090034;
unsigned int var_18 = 80174010U;
int var_19 = -480158286;
unsigned int var_20 = 3207683693U;
unsigned int var_21 = 1043526168U;
unsigned long long int var_22 = 15312205047941795309ULL;
signed char var_23 = (signed char)119;
long long int var_24 = 2192933719601697678LL;
int var_25 = -702020345;
int var_26 = 1803428899;
unsigned short var_27 = (unsigned short)7040;
unsigned short var_28 = (unsigned short)18922;
unsigned short var_29 = (unsigned short)16492;
unsigned short var_30 = (unsigned short)19109;
unsigned char var_31 = (unsigned char)14;
signed char var_32 = (signed char)-84;
int var_33 = 1530150125;
unsigned short var_34 = (unsigned short)56088;
unsigned int var_35 = 519852490U;
signed char var_36 = (signed char)-4;
int arr_0 [23] [23] ;
int arr_1 [23] ;
unsigned char arr_4 [23] [23] [23] ;
int arr_5 [23] [23] [23] [23] ;
int arr_6 [23] [23] [23] ;
unsigned short arr_7 [23] [23] [23] [23] [23] ;
int arr_8 [23] [23] ;
int arr_11 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = 1299820230;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = -755901945;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned char)5;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = -1687648361;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = -1896191612;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_7 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)60913;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_8 [i_0] [i_1] = -1147321318;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_11 [i_0] [i_1] = (i_0 % 2 == 0) ? 1099364294 : 1594756269;
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
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
