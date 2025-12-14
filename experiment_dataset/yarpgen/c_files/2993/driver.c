#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
short var_2 = (short)23776;
signed char var_4 = (signed char)39;
_Bool var_5 = (_Bool)0;
short var_6 = (short)-25938;
unsigned short var_7 = (unsigned short)34666;
signed char var_8 = (signed char)-70;
signed char var_9 = (signed char)-57;
signed char var_10 = (signed char)104;
short var_12 = (short)-22817;
unsigned long long int var_13 = 18050078748689308855ULL;
short var_14 = (short)17640;
int zero = 0;
long long int var_16 = -1463713279512737402LL;
unsigned char var_17 = (unsigned char)59;
unsigned short var_18 = (unsigned short)58921;
unsigned int var_19 = 2373405393U;
signed char var_20 = (signed char)-123;
unsigned char var_21 = (unsigned char)48;
unsigned char var_22 = (unsigned char)177;
_Bool var_23 = (_Bool)0;
short arr_0 [10] ;
long long int arr_3 [10] ;
unsigned short arr_4 [10] [10] [10] ;
long long int arr_10 [24] ;
short arr_11 [24] [24] [24] ;
long long int arr_12 [24] [24] [24] ;
_Bool arr_13 [24] [24] [24] ;
unsigned long long int arr_15 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (short)-19000;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 2815487906751490212LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned short)29469;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = -3499378159535211844LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (short)-22223;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = -7531762562043340350LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = 4253853944709640379ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_15 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
