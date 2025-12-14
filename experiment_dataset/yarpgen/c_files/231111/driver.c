#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)198;
int var_1 = 1378850260;
unsigned short var_2 = (unsigned short)5902;
signed char var_3 = (signed char)-76;
unsigned char var_5 = (unsigned char)70;
unsigned int var_6 = 1827285306U;
unsigned int var_7 = 1097677014U;
signed char var_8 = (signed char)82;
long long int var_9 = 8964138135049818725LL;
unsigned int var_10 = 2705756602U;
int zero = 0;
long long int var_11 = -5850528949998172688LL;
unsigned int var_12 = 2553442895U;
unsigned long long int var_13 = 6969926156025819927ULL;
short var_14 = (short)-25272;
unsigned int var_15 = 4282502224U;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 3267892948U;
int var_18 = 330320715;
long long int var_19 = 3311483921189350535LL;
unsigned short var_20 = (unsigned short)40127;
unsigned short var_21 = (unsigned short)62330;
unsigned char arr_6 [18] ;
unsigned int arr_9 [18] [18] [18] [18] ;
unsigned short arr_11 [18] [18] [18] ;
unsigned long long int arr_15 [18] [18] ;
unsigned short arr_21 [24] ;
int arr_3 [18] ;
unsigned char arr_16 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (unsigned char)88;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 1756311693U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (unsigned short)35801;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_15 [i_0] [i_1] = 9089727197915167425ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_21 [i_0] = (unsigned short)31531;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = 2026176957;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_16 [i_0] [i_1] = (unsigned char)12;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
