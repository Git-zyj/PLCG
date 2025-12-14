#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-28;
unsigned long long int var_1 = 11553653821798595304ULL;
unsigned char var_3 = (unsigned char)85;
signed char var_4 = (signed char)-60;
unsigned long long int var_5 = 9355048162264425338ULL;
unsigned short var_6 = (unsigned short)22130;
signed char var_8 = (signed char)-66;
long long int var_9 = -8111139553863882924LL;
int var_10 = 2079676503;
_Bool var_11 = (_Bool)1;
short var_12 = (short)2090;
_Bool var_13 = (_Bool)0;
int zero = 0;
short var_14 = (short)-30684;
signed char var_15 = (signed char)7;
int var_16 = 1051489242;
signed char var_17 = (signed char)-67;
int var_18 = 1786661372;
long long int var_19 = -8228816817324986073LL;
signed char arr_0 [12] ;
long long int arr_1 [12] ;
long long int arr_2 [12] [12] [12] ;
short arr_3 [12] [12] [12] ;
signed char arr_4 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (signed char)38;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 7571147399117308696LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = -8762499394066023786LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (short)-9165;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (signed char)95;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_4 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
