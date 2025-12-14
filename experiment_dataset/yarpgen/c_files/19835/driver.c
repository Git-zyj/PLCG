#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2489068620U;
signed char var_1 = (signed char)-63;
long long int var_2 = 1612834639048326768LL;
long long int var_7 = 4722861662792978582LL;
_Bool var_8 = (_Bool)0;
long long int var_9 = -1774521491920828401LL;
unsigned long long int var_10 = 14532451009833674770ULL;
unsigned int var_11 = 618558026U;
unsigned int var_12 = 534596369U;
short var_13 = (short)-14860;
_Bool var_14 = (_Bool)0;
unsigned int var_17 = 2849243697U;
int zero = 0;
unsigned short var_18 = (unsigned short)47791;
unsigned int var_19 = 91072677U;
unsigned char var_20 = (unsigned char)204;
_Bool var_21 = (_Bool)0;
unsigned char var_22 = (unsigned char)34;
unsigned int var_23 = 2204840501U;
long long int var_24 = -4547526776053194108LL;
unsigned int var_25 = 3769259522U;
short var_26 = (short)-14424;
short var_27 = (short)23390;
unsigned short var_28 = (unsigned short)43719;
_Bool var_29 = (_Bool)1;
short var_30 = (short)-28718;
unsigned short arr_0 [10] [10] ;
short arr_3 [10] ;
short arr_4 [10] ;
signed char arr_9 [20] ;
int arr_10 [20] ;
_Bool arr_13 [20] [20] [20] ;
unsigned long long int arr_15 [20] ;
long long int arr_17 [20] [20] [20] [20] ;
unsigned short arr_23 [20] [20] [20] [20] [20] ;
unsigned short arr_7 [17] [17] ;
unsigned short arr_8 [17] ;
unsigned long long int arr_11 [20] ;
unsigned int arr_24 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)34313;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (short)10770;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (short)19362;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_9 [i_0] = (signed char)100;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_10 [i_0] = 1491286165;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_15 [i_0] = 5299891669618653901ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = -3482247815312030968LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)5520;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)56324;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = (unsigned short)63543;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_11 [i_0] = 4217636549764140674ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_24 [i_0] [i_1] = (i_0 % 2 == 0) ? 1188614689U : 3819357740U;
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_24 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
