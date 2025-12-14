#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
_Bool var_4 = (_Bool)0;
short var_5 = (short)31223;
long long int var_6 = 2017049821190247927LL;
_Bool var_7 = (_Bool)1;
signed char var_8 = (signed char)38;
unsigned long long int var_9 = 17569080257799933008ULL;
short var_10 = (short)-16484;
unsigned char var_11 = (unsigned char)149;
_Bool var_12 = (_Bool)1;
int var_13 = 1983892930;
int zero = 0;
unsigned int var_14 = 18948700U;
unsigned int var_15 = 3338996620U;
signed char var_16 = (signed char)-18;
long long int var_17 = -6099411493727227049LL;
_Bool var_18 = (_Bool)1;
unsigned char var_19 = (unsigned char)117;
short var_20 = (short)-10406;
unsigned long long int var_21 = 13085101938750343843ULL;
long long int var_22 = -5154892519669775085LL;
long long int var_23 = -5136780403921040345LL;
unsigned long long int arr_0 [25] [25] ;
_Bool arr_1 [25] ;
long long int arr_2 [25] [25] [25] ;
unsigned char arr_3 [25] [25] [25] ;
unsigned char arr_4 [25] [25] [25] ;
long long int arr_9 [25] [25] ;
signed char arr_11 [25] ;
long long int arr_12 [25] [25] [25] [25] [25] ;
short arr_13 [25] [25] [25] ;
signed char arr_8 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = 1872365165152024228ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 7842800612184968008LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned char)140;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned char)85;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_9 [i_0] [i_1] = 773103549057455618LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_11 [i_0] = (signed char)39;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? -6076273094419918694LL : 6439962114690773455LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)-24431 : (short)-29767;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = (signed char)-85;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
