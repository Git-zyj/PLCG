#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4208095031176677153LL;
long long int var_1 = 581077219080674576LL;
short var_5 = (short)7375;
short var_6 = (short)8238;
short var_11 = (short)-24798;
unsigned int var_13 = 3813316058U;
short var_15 = (short)-9249;
short var_17 = (short)-2998;
unsigned char var_19 = (unsigned char)196;
int zero = 0;
unsigned int var_20 = 2009764058U;
short var_21 = (short)8252;
short var_22 = (short)-15137;
_Bool var_23 = (_Bool)0;
unsigned char var_24 = (unsigned char)216;
unsigned char var_25 = (unsigned char)91;
short var_26 = (short)20030;
long long int var_27 = -7389416289986208576LL;
short var_28 = (short)19278;
long long int arr_0 [12] ;
_Bool arr_1 [12] [12] ;
unsigned long long int arr_2 [12] ;
long long int arr_3 [12] [12] [12] ;
unsigned long long int arr_4 [12] [12] ;
unsigned int arr_10 [13] ;
signed char arr_11 [13] ;
unsigned long long int arr_5 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = -5642649381942797620LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 18109322652830091953ULL : 13155377024684948759ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -2649072596459042925LL : -6260716515176729454LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? 4987830534823838696ULL : 10075505714568932890ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_10 [i_0] = 3044117646U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_11 [i_0] = (signed char)69;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 514719209553459046ULL : 14167075265039874554ULL;
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
