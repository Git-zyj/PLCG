#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6914374589189576422ULL;
long long int var_2 = -5652721729031566665LL;
signed char var_3 = (signed char)-15;
unsigned short var_4 = (unsigned short)42980;
unsigned long long int var_5 = 2757730450340514564ULL;
short var_7 = (short)14304;
short var_8 = (short)420;
unsigned short var_9 = (unsigned short)21247;
unsigned long long int var_10 = 15753897588091489438ULL;
_Bool var_12 = (_Bool)1;
short var_13 = (short)-11051;
int zero = 0;
long long int var_14 = -1891257385057961702LL;
unsigned char var_15 = (unsigned char)242;
_Bool var_16 = (_Bool)0;
short var_17 = (short)19516;
short var_18 = (short)-10598;
long long int var_19 = 6540186758419109288LL;
long long int var_20 = -480738349934645030LL;
unsigned char arr_0 [10] ;
short arr_1 [10] [10] ;
long long int arr_2 [10] ;
unsigned char arr_4 [10] [10] [10] ;
_Bool arr_5 [10] ;
unsigned long long int arr_6 [10] [10] ;
unsigned char arr_7 [10] [10] [10] ;
unsigned long long int arr_8 [10] [10] ;
long long int arr_9 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (unsigned char)14;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = (short)17012;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = -3140559066839594607LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)132 : (unsigned char)42;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_6 [i_0] [i_1] = 15597768217792808415ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)19 : (unsigned char)212;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? 8570053542211403331ULL : 1376290572209520975ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? 8179386576585305289LL : 99659763144705413LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
