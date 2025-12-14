#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1380171526U;
signed char var_1 = (signed char)-59;
unsigned int var_2 = 1593883308U;
long long int var_3 = -8489270007985582096LL;
_Bool var_4 = (_Bool)0;
unsigned short var_5 = (unsigned short)47106;
_Bool var_6 = (_Bool)1;
unsigned int var_8 = 2300629752U;
unsigned int var_9 = 977829874U;
unsigned char var_11 = (unsigned char)160;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)69;
long long int var_14 = 7264737331263187949LL;
_Bool var_15 = (_Bool)1;
long long int var_16 = -2375102625247324175LL;
unsigned char var_17 = (unsigned char)232;
int zero = 0;
unsigned short var_18 = (unsigned short)8492;
signed char var_19 = (signed char)49;
long long int var_20 = 5116901785319532617LL;
_Bool arr_1 [20] ;
signed char arr_2 [20] [20] ;
int arr_3 [20] [20] [20] ;
long long int arr_4 [20] ;
unsigned long long int arr_5 [20] [20] ;
unsigned int arr_7 [20] [20] [20] [20] ;
unsigned short arr_8 [20] ;
unsigned long long int arr_10 [20] [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)6 : (signed char)32;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = -305200073;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = -985143851306187107LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? 17348450054015562808ULL : 16600710905535168377ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 2169795903U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = (unsigned short)14505;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 14945718141704905038ULL : 6010780684467401429ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    hash(&seed, arr_10 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
