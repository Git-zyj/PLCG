#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14838355329773287924ULL;
unsigned long long int var_4 = 4195883538536617569ULL;
unsigned long long int var_8 = 17015092687892711439ULL;
unsigned short var_9 = (unsigned short)12355;
unsigned long long int var_11 = 17584591458454589624ULL;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)31493;
int zero = 0;
int var_15 = -2146378064;
int var_16 = 871556476;
short var_17 = (short)11728;
unsigned long long int var_18 = 14210192145177173053ULL;
signed char arr_0 [17] ;
_Bool arr_1 [17] ;
unsigned short arr_3 [17] ;
_Bool arr_4 [17] ;
long long int arr_6 [17] [17] ;
unsigned long long int arr_2 [17] ;
int arr_7 [17] ;
unsigned long long int arr_8 [17] ;
unsigned long long int arr_9 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (signed char)-20;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (unsigned short)45079;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_6 [i_0] [i_1] = 8878235004397027221LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = 13255076402627609200ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = -538700569;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = 12541104106672084975ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_9 [i_0] = 292140553534776320ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
