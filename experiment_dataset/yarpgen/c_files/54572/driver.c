#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 305756978573011884ULL;
unsigned long long int var_2 = 11727772584138935659ULL;
short var_3 = (short)-1046;
unsigned long long int var_5 = 13353973660312790086ULL;
unsigned long long int var_7 = 13736905586147234029ULL;
long long int var_8 = -8291269590967499214LL;
unsigned int var_10 = 86462918U;
short var_11 = (short)30767;
unsigned short var_12 = (unsigned short)3226;
int zero = 0;
unsigned short var_15 = (unsigned short)57679;
unsigned short var_16 = (unsigned short)20516;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 5780452700482807895ULL;
unsigned long long int var_19 = 12190057059310241148ULL;
unsigned short var_20 = (unsigned short)26851;
short arr_0 [11] [11] ;
long long int arr_1 [11] [11] ;
signed char arr_2 [11] ;
unsigned short arr_4 [11] ;
long long int arr_5 [11] [11] ;
long long int arr_9 [25] ;
unsigned int arr_10 [25] ;
unsigned short arr_7 [11] [11] ;
unsigned long long int arr_8 [11] [11] ;
short arr_11 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)2146 : (short)-12043;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = -895423319081906889LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (signed char)-67 : (signed char)116;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned short)47591 : (unsigned short)59241;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = -2504985092045065705LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_9 [i_0] = 2020513631452262191LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_10 [i_0] = 1950512826U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)39337 : (unsigned short)11377;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? 6398082052999105682ULL : 9852845583749227566ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_11 [i_0] = (short)24198;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
