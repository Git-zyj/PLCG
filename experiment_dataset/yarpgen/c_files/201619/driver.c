#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3687123086033355298ULL;
unsigned char var_1 = (unsigned char)118;
_Bool var_2 = (_Bool)0;
unsigned int var_3 = 873498820U;
signed char var_4 = (signed char)26;
_Bool var_6 = (_Bool)1;
unsigned int var_7 = 3547436873U;
long long int var_9 = -2801038160610026258LL;
unsigned int var_10 = 475593775U;
unsigned int var_11 = 3697360571U;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 9466116068812243894ULL;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 2206616822U;
unsigned char var_17 = (unsigned char)132;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 2317154189U;
unsigned int var_20 = 861370153U;
signed char var_21 = (signed char)-122;
int arr_0 [24] [24] ;
short arr_1 [24] [24] ;
long long int arr_4 [14] ;
long long int arr_6 [14] [14] [14] ;
long long int arr_2 [24] ;
unsigned int arr_7 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = -654746981;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (short)28606;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = 8067482264436610214LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 915805212752181023LL : -9092336949519842050LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = -5668526103672612559LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? 1907978513U : 895698921U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
