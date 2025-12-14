#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 77858298U;
unsigned int var_1 = 1941011856U;
unsigned char var_5 = (unsigned char)232;
long long int var_17 = -2342236091127673891LL;
long long int var_18 = -9168720691969463965LL;
int zero = 0;
unsigned short var_20 = (unsigned short)33246;
unsigned short var_21 = (unsigned short)45906;
short var_22 = (short)-14550;
unsigned int var_23 = 4189870955U;
signed char var_24 = (signed char)-107;
signed char var_25 = (signed char)-111;
long long int var_26 = -640167421648531368LL;
unsigned int var_27 = 2516479336U;
signed char var_28 = (signed char)17;
unsigned int var_29 = 683789194U;
_Bool var_30 = (_Bool)0;
unsigned long long int var_31 = 3319773886504297009ULL;
unsigned long long int var_32 = 18250538536353639394ULL;
_Bool var_33 = (_Bool)1;
signed char var_34 = (signed char)-14;
_Bool var_35 = (_Bool)1;
unsigned short var_36 = (unsigned short)37824;
unsigned int var_37 = 4002363586U;
long long int arr_0 [15] ;
unsigned char arr_3 [15] [15] [15] ;
unsigned long long int arr_4 [15] ;
_Bool arr_5 [15] [15] [15] [15] ;
short arr_6 [15] [15] [15] [15] ;
_Bool arr_10 [12] [12] ;
long long int arr_11 [16] ;
int arr_12 [16] [16] ;
signed char arr_19 [16] [16] [16] [16] [16] [16] ;
unsigned long long int arr_20 [16] [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = -1836819873245557877LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)158 : (unsigned char)188;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = 15521020882123622325ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (short)-30172;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_10 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_11 [i_0] = -3777092797472804212LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_12 [i_0] [i_1] = 245887296;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (signed char)-11;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 15826630014426667380ULL : 6748228359155975868ULL;
}

void checksum() {
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
    hash(&seed, var_37);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
