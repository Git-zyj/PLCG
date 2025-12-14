#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)4457;
unsigned short var_4 = (unsigned short)7945;
unsigned int var_5 = 3659399867U;
unsigned int var_6 = 938972653U;
long long int var_7 = -2751999741102395653LL;
signed char var_8 = (signed char)109;
short var_9 = (short)-11564;
unsigned int var_11 = 1238554134U;
int zero = 0;
long long int var_12 = 8180612647764534208LL;
unsigned short var_13 = (unsigned short)17039;
signed char var_14 = (signed char)-109;
unsigned int var_15 = 2886138458U;
int var_16 = -1649228637;
unsigned short var_17 = (unsigned short)12744;
unsigned short var_18 = (unsigned short)10112;
int var_19 = 982909861;
long long int var_20 = -1754773154568334585LL;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)0;
signed char var_23 = (signed char)-77;
unsigned char var_24 = (unsigned char)152;
signed char var_25 = (signed char)80;
_Bool arr_0 [19] ;
long long int arr_3 [23] ;
unsigned int arr_7 [23] ;
int arr_11 [23] [23] [23] [23] ;
_Bool arr_5 [23] [23] ;
unsigned short arr_15 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = -2917669716732206227LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = 1314137720U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 1125709568 : -2035358083;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)18354 : (unsigned short)59129;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_15 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
