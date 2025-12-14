#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-112;
signed char var_1 = (signed char)-117;
int var_2 = -476823283;
unsigned short var_3 = (unsigned short)6715;
unsigned int var_4 = 2199028909U;
unsigned short var_6 = (unsigned short)25674;
_Bool var_7 = (_Bool)1;
unsigned short var_9 = (unsigned short)19192;
signed char var_10 = (signed char)18;
int zero = 0;
signed char var_11 = (signed char)-10;
unsigned long long int var_12 = 2559323370217010114ULL;
unsigned long long int var_13 = 4830106339469504854ULL;
signed char var_14 = (signed char)113;
unsigned long long int var_15 = 4157836924145108204ULL;
unsigned int var_16 = 3279083640U;
signed char var_17 = (signed char)-76;
unsigned long long int var_18 = 8309008330849555798ULL;
unsigned char var_19 = (unsigned char)211;
unsigned long long int var_20 = 6458025931548697559ULL;
unsigned short var_21 = (unsigned short)26717;
unsigned long long int arr_0 [23] ;
unsigned short arr_1 [23] ;
unsigned long long int arr_3 [24] ;
int arr_4 [24] ;
unsigned int arr_2 [23] ;
unsigned int arr_5 [24] ;
unsigned int arr_6 [24] ;
unsigned long long int arr_11 [20] ;
unsigned long long int arr_24 [20] ;
unsigned char arr_25 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 10463644107900746650ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (unsigned short)32989;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = 15706697791279202229ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = -1910215378;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 3348137530U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = 3637162306U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = 1981427962U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? 13727415941387498432ULL : 1813236019346754397ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_24 [i_0] = 10819326013397576341ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_25 [i_0] = (unsigned char)111;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_24 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_25 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
