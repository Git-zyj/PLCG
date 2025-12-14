#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11966042142879743510ULL;
unsigned short var_1 = (unsigned short)19496;
unsigned int var_2 = 2883750980U;
long long int var_3 = 6026374839792265529LL;
unsigned char var_4 = (unsigned char)218;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 2613186386U;
unsigned char var_7 = (unsigned char)109;
unsigned char var_8 = (unsigned char)135;
unsigned char var_9 = (unsigned char)25;
int var_10 = -198068143;
long long int var_12 = -1364856761858183884LL;
int var_13 = -898232303;
unsigned long long int var_15 = 9550190106610036087ULL;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 3178185562U;
int zero = 0;
long long int var_18 = 7273705820734407463LL;
unsigned long long int var_19 = 5611952440518048798ULL;
unsigned char var_20 = (unsigned char)163;
unsigned int arr_0 [12] ;
unsigned long long int arr_1 [12] ;
unsigned char arr_2 [12] [12] ;
unsigned int arr_3 [12] ;
signed char arr_4 [12] ;
unsigned int arr_5 [12] ;
unsigned int arr_6 [12] [12] ;
short arr_7 [12] [12] [12] ;
int arr_9 [12] [12] ;
signed char arr_10 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 2363083151U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 18026979212796795449ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)251;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = 20629229U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (signed char)58;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = 2040252627U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_6 [i_0] [i_1] = 2783258727U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (short)-15374;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_9 [i_0] [i_1] = 1705148649;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (signed char)-14;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
