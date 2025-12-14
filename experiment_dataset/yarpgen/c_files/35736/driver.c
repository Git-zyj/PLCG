#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)25;
unsigned char var_1 = (unsigned char)106;
unsigned char var_2 = (unsigned char)133;
unsigned char var_3 = (unsigned char)38;
signed char var_4 = (signed char)-27;
unsigned short var_6 = (unsigned short)25507;
unsigned int var_7 = 3775376873U;
signed char var_8 = (signed char)113;
int var_11 = 2139447804;
_Bool var_12 = (_Bool)0;
int zero = 0;
signed char var_13 = (signed char)95;
unsigned char var_14 = (unsigned char)67;
unsigned short var_15 = (unsigned short)24996;
unsigned int var_16 = 3629521934U;
unsigned short var_17 = (unsigned short)33329;
long long int var_18 = -9145003345133024309LL;
long long int var_19 = -3190213455640881235LL;
unsigned short var_20 = (unsigned short)47652;
unsigned short var_21 = (unsigned short)37914;
long long int var_22 = -8089103656514746473LL;
signed char var_23 = (signed char)-113;
long long int var_24 = -5993279844115960997LL;
signed char var_25 = (signed char)-124;
unsigned long long int var_26 = 12694789664512195180ULL;
unsigned short var_27 = (unsigned short)10367;
signed char var_28 = (signed char)17;
int var_29 = -1765700236;
unsigned long long int var_30 = 2635347237095592091ULL;
unsigned int var_31 = 2048281135U;
signed char var_32 = (signed char)42;
unsigned long long int var_33 = 16834578560687426166ULL;
signed char var_34 = (signed char)-18;
unsigned short arr_1 [17] ;
int arr_7 [23] [23] ;
unsigned long long int arr_13 [23] [23] [23] [23] ;
signed char arr_15 [23] [23] [23] [23] [23] [23] ;
short arr_18 [23] [23] [23] [23] [23] [23] ;
short arr_25 [23] [23] [23] [23] [23] ;
signed char arr_28 [12] ;
unsigned short arr_31 [12] [12] [12] ;
unsigned int arr_3 [17] [17] ;
signed char arr_8 [23] ;
unsigned int arr_26 [23] [23] [23] [23] [23] ;
signed char arr_42 [12] ;
long long int arr_47 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (unsigned short)56527;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_7 [i_0] [i_1] = 556368996;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = 9088601288834469800ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (signed char)74;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)-20870;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_25 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)30142;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_28 [i_0] = (signed char)-41;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_31 [i_0] [i_1] [i_2] = (unsigned short)55775;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = 1776368940U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = (signed char)-38;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] = 2646722951U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_42 [i_0] = (signed char)-124;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_47 [i_0] = 6765470307289577012LL;
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
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        hash(&seed, arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_42 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_47 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
