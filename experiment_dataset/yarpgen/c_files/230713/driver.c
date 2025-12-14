#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -466303890863981038LL;
long long int var_2 = -3822722691945416908LL;
unsigned long long int var_3 = 11160854883197489231ULL;
unsigned long long int var_4 = 8521847045367743939ULL;
unsigned long long int var_6 = 17587218572936105460ULL;
_Bool var_7 = (_Bool)0;
unsigned long long int var_9 = 17651845412939003027ULL;
unsigned long long int var_11 = 14868889033375384194ULL;
long long int var_12 = 489921568662890130LL;
_Bool var_13 = (_Bool)1;
int var_14 = 741268000;
int var_15 = 736789241;
long long int var_16 = 5300070323896508507LL;
int zero = 0;
int var_17 = 1711780847;
long long int var_18 = -2818653614196999224LL;
unsigned char var_19 = (unsigned char)151;
unsigned int var_20 = 1632915922U;
long long int var_21 = 4492811490210913838LL;
int var_22 = 1130719703;
int var_23 = 712035964;
long long int var_24 = -4407605452649166545LL;
unsigned long long int arr_2 [13] ;
short arr_5 [20] ;
long long int arr_6 [20] ;
int arr_8 [15] ;
long long int arr_12 [15] ;
int arr_4 [13] [13] ;
_Bool arr_7 [20] [20] ;
unsigned char arr_10 [15] [15] ;
int arr_11 [15] ;
unsigned long long int arr_16 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 361526367927557526ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = (short)15015;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = -5533816897345657973LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = -1235123600;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_12 [i_0] = 1645788137611208430LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = -2120846263;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_7 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned char)212;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_11 [i_0] = 968128129;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_16 [i_0] [i_1] = (i_1 % 2 == 0) ? 15221724256341706110ULL : 6068823324093193490ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
