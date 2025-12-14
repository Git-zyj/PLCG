#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)34486;
_Bool var_1 = (_Bool)1;
unsigned long long int var_2 = 17419201016404760051ULL;
unsigned long long int var_3 = 11472865635994141179ULL;
short var_4 = (short)21457;
unsigned long long int var_5 = 17531270237304770123ULL;
unsigned long long int var_6 = 10073252876493234545ULL;
short var_7 = (short)-24530;
unsigned long long int var_8 = 9370528510199633193ULL;
signed char var_9 = (signed char)-123;
signed char var_10 = (signed char)-56;
signed char var_11 = (signed char)119;
int zero = 0;
unsigned short var_12 = (unsigned short)47436;
long long int var_13 = -4441355349758585802LL;
short var_14 = (short)24435;
unsigned int var_15 = 3460643340U;
signed char var_16 = (signed char)-116;
long long int var_17 = -7915624590194336164LL;
short arr_0 [15] ;
int arr_2 [15] ;
_Bool arr_3 [15] ;
short arr_4 [15] ;
signed char arr_9 [15] [15] [15] ;
short arr_10 [15] [15] [15] [15] ;
unsigned long long int arr_5 [15] [15] ;
long long int arr_11 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (short)8130;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 960287892;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (short)19596;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (signed char)-56;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (short)-9899;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = 7020469941642366587ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_11 [i_0] [i_1] = 8461511564207129839LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
