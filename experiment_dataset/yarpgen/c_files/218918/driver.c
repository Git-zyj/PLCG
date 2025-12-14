#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_1 = 2741024810U;
_Bool var_2 = (_Bool)0;
signed char var_3 = (signed char)67;
_Bool var_4 = (_Bool)1;
signed char var_5 = (signed char)-73;
short var_6 = (short)8360;
_Bool var_8 = (_Bool)1;
unsigned int var_9 = 360843412U;
unsigned int var_10 = 2488851489U;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned char var_13 = (unsigned char)82;
unsigned long long int var_14 = 18002306366002436088ULL;
signed char var_15 = (signed char)27;
long long int var_16 = 1659970426187972658LL;
int var_17 = -1835811793;
unsigned long long int var_18 = 16420185234667457477ULL;
long long int var_19 = 2582985119076988357LL;
unsigned char var_20 = (unsigned char)231;
unsigned long long int var_21 = 11880959351759436823ULL;
unsigned short var_22 = (unsigned short)58929;
long long int var_23 = -3254985135894022495LL;
signed char var_24 = (signed char)40;
unsigned short var_25 = (unsigned short)26658;
unsigned char var_26 = (unsigned char)140;
signed char arr_1 [18] ;
unsigned short arr_2 [18] ;
short arr_3 [18] ;
unsigned char arr_4 [18] [18] [18] ;
long long int arr_6 [18] [18] ;
_Bool arr_18 [11] ;
unsigned char arr_20 [11] [11] ;
unsigned short arr_21 [11] [11] [11] [11] [11] ;
long long int arr_23 [11] [11] [11] [11] [11] [11] [11] ;
unsigned short arr_27 [24] ;
short arr_28 [24] ;
signed char arr_29 [24] ;
unsigned short arr_30 [24] ;
signed char arr_34 [24] ;
signed char arr_37 [24] ;
unsigned int arr_38 [24] ;
int arr_7 [18] [18] [18] ;
long long int arr_12 [11] ;
unsigned int arr_24 [11] [11] [11] [11] [11] ;
signed char arr_25 [11] [11] ;
_Bool arr_26 [11] [11] [11] [11] ;
unsigned char arr_31 [24] ;
int arr_32 [24] ;
unsigned int arr_36 [24] [24] ;
unsigned int arr_39 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (signed char)28;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (unsigned short)10966;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (short)-10207;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned char)217;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_6 [i_0] [i_1] = 6653193545582947117LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_18 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_20 [i_0] [i_1] = (unsigned char)202;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? (unsigned short)40681 : (unsigned short)26251;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 11; ++i_6) 
                                arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 286150913041674829LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_27 [i_0] = (unsigned short)37585;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_28 [i_0] = (short)-14933;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_29 [i_0] = (signed char)-85;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_30 [i_0] = (unsigned short)10458;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_34 [i_0] = (signed char)-57;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_37 [i_0] = (signed char)-97;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_38 [i_0] = 3107800899U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = -405626877;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_12 [i_0] = 6004782790514830561LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? 4171781007U : 1260036768U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_25 [i_0] [i_1] = (signed char)25;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_26 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_31 [i_0] = (unsigned char)238;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_32 [i_0] = -221316486;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_36 [i_0] [i_1] = 3582078933U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_39 [i_0] = 3675346970U;
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        hash(&seed, arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_25 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    hash(&seed, arr_26 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_31 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_32 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_36 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_39 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
