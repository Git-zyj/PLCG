#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1456640402;
unsigned short var_2 = (unsigned short)22722;
int var_4 = -518114299;
unsigned char var_5 = (unsigned char)155;
_Bool var_7 = (_Bool)0;
unsigned int var_8 = 3249747749U;
int var_9 = -994163203;
signed char var_10 = (signed char)113;
int var_11 = -1983614680;
short var_12 = (short)-28564;
short var_15 = (short)28904;
int var_17 = -150152954;
unsigned int var_18 = 736521628U;
int zero = 0;
unsigned char var_19 = (unsigned char)25;
short var_20 = (short)-15385;
int var_21 = 1248935802;
unsigned short var_22 = (unsigned short)9742;
signed char var_23 = (signed char)-42;
_Bool var_24 = (_Bool)1;
short var_25 = (short)-5642;
unsigned short var_26 = (unsigned short)32653;
int var_27 = 954838692;
short var_28 = (short)3011;
int var_29 = 1027333427;
unsigned short var_30 = (unsigned short)24703;
short var_31 = (short)-6745;
short var_32 = (short)-20658;
unsigned short var_33 = (unsigned short)34105;
unsigned char var_34 = (unsigned char)199;
short arr_7 [14] [14] [14] ;
unsigned int arr_9 [20] ;
unsigned short arr_10 [20] [20] [20] ;
int arr_11 [20] ;
short arr_14 [20] [20] [20] [20] ;
short arr_15 [20] [20] [20] ;
unsigned int arr_17 [20] [20] ;
short arr_20 [20] [20] [20] [20] [20] ;
unsigned long long int arr_24 [20] [20] [20] [20] [20] ;
_Bool arr_25 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)13804 : (short)26776;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 2936134471U : 4282244953U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)9150 : (unsigned short)59951;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? -1751129319 : -795822786;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (short)21456;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)-23730 : (short)13279;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_17 [i_0] [i_1] = 1672108753U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)9486;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] = 2983632288638201343ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_25 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_25 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
