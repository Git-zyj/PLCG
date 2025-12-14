#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)55270;
_Bool var_3 = (_Bool)0;
int var_4 = 1504035620;
int var_7 = -785993647;
long long int var_8 = 4818052884634570LL;
signed char var_10 = (signed char)-121;
long long int var_11 = -2943364984555698272LL;
unsigned char var_13 = (unsigned char)232;
unsigned char var_16 = (unsigned char)222;
int zero = 0;
signed char var_17 = (signed char)(-127 - 1);
unsigned int var_18 = 648701649U;
long long int var_19 = -3519511821194490215LL;
unsigned char var_20 = (unsigned char)61;
int var_21 = -1980935743;
unsigned short var_22 = (unsigned short)64293;
short var_23 = (short)15691;
unsigned short arr_0 [21] [21] ;
unsigned long long int arr_1 [21] ;
unsigned char arr_3 [25] ;
long long int arr_4 [25] ;
_Bool arr_7 [25] [25] ;
unsigned long long int arr_2 [21] ;
unsigned short arr_5 [25] ;
unsigned int arr_9 [25] [25] ;
long long int arr_10 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)41381;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 7060651703442802499ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned char)27 : (unsigned char)70;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 2886871313559597469LL : -6071421624303623346LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_7 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 4568202305642231600ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned short)45846 : (unsigned short)7041;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? 3743907948U : 3102394827U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? 3766329081640093376LL : -270982960697355559LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
