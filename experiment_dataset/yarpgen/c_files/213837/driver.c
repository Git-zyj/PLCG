#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)159;
unsigned char var_1 = (unsigned char)244;
int var_2 = 1871410887;
signed char var_5 = (signed char)15;
_Bool var_7 = (_Bool)0;
long long int var_8 = 3539502989577501632LL;
unsigned char var_9 = (unsigned char)19;
long long int var_11 = -835615064593871727LL;
_Bool var_12 = (_Bool)1;
long long int var_13 = 8706790743488348919LL;
unsigned char var_14 = (unsigned char)81;
int zero = 0;
int var_15 = -254817950;
unsigned char var_16 = (unsigned char)143;
long long int var_17 = -223846225414223462LL;
unsigned char var_18 = (unsigned char)60;
unsigned long long int var_19 = 7113232218878985613ULL;
unsigned short var_20 = (unsigned short)26157;
unsigned short var_21 = (unsigned short)49562;
unsigned int var_22 = 2666048165U;
unsigned long long int var_23 = 2917599637026546582ULL;
unsigned long long int arr_0 [14] [14] ;
unsigned long long int arr_2 [14] [14] ;
_Bool arr_6 [14] [14] ;
unsigned int arr_9 [15] [15] ;
unsigned long long int arr_10 [15] ;
signed char arr_12 [25] ;
unsigned short arr_7 [14] ;
unsigned char arr_11 [15] ;
unsigned int arr_14 [25] ;
int arr_15 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = 7871553146509071550ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = 12153114617017656040ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_9 [i_0] [i_1] = 1943758567U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_10 [i_0] = 6646548877173379505ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_12 [i_0] = (signed char)-17;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (unsigned short)3383 : (unsigned short)50321;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_11 [i_0] = (unsigned char)49;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_14 [i_0] = 2734536482U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_15 [i_0] [i_1] = 1331927481;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
