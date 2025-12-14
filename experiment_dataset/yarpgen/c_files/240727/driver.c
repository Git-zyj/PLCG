#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-5;
long long int var_1 = 3741541186897844195LL;
long long int var_2 = 8622580167980100494LL;
signed char var_3 = (signed char)35;
int var_5 = 1062572702;
long long int var_7 = 7275545110172147100LL;
int var_9 = 27496525;
int var_12 = 1867938557;
signed char var_13 = (signed char)25;
_Bool var_15 = (_Bool)0;
long long int var_16 = 5492890621939784516LL;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned int var_18 = 2181427873U;
long long int var_19 = 2417055785470039004LL;
int var_20 = -971226643;
long long int var_21 = -8500975274598292298LL;
signed char var_22 = (signed char)37;
unsigned int var_23 = 1606933264U;
long long int var_24 = 7202072433781252782LL;
unsigned int var_25 = 4089262314U;
int var_26 = 1723115519;
long long int arr_0 [13] ;
_Bool arr_1 [13] ;
signed char arr_2 [13] [13] [13] ;
long long int arr_3 [13] [13] ;
int arr_4 [13] ;
int arr_6 [13] [13] [13] ;
long long int arr_9 [10] [10] ;
int arr_7 [13] [13] ;
int arr_10 [10] ;
unsigned int arr_11 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = -705769384400376700LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (signed char)48;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = -5329000410304492270LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = 922125945;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 1186828433;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_9 [i_0] [i_1] = -8588545130004488965LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_7 [i_0] [i_1] = -2101934524;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? 1843984519 : -33379945;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? 3734332892U : 720168529U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
