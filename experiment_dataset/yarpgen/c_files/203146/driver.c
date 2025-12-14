#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -2046779489;
unsigned long long int var_4 = 15526070421027566055ULL;
_Bool var_6 = (_Bool)1;
unsigned char var_7 = (unsigned char)226;
unsigned int var_10 = 872871913U;
unsigned int var_11 = 155573633U;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned long long int var_19 = 6714090904578810115ULL;
short var_20 = (short)-5477;
int var_21 = -474882743;
short var_22 = (short)3399;
signed char var_23 = (signed char)-22;
int var_24 = 247499561;
_Bool var_25 = (_Bool)1;
unsigned long long int var_26 = 10606653748286612385ULL;
short var_27 = (short)-30392;
unsigned long long int var_28 = 12539071331368666836ULL;
int var_29 = -189955471;
short arr_0 [14] ;
unsigned char arr_1 [14] [14] ;
unsigned char arr_2 [14] ;
int arr_4 [14] [14] ;
unsigned char arr_10 [19] ;
short arr_13 [19] [19] ;
unsigned long long int arr_14 [19] [19] ;
int arr_5 [14] [14] ;
short arr_8 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (short)-23314;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)96;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (unsigned char)96;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? 791476197 : 518561037;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_10 [i_0] = (unsigned char)240;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_13 [i_0] [i_1] = (short)6854;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_14 [i_0] [i_1] = 16412322503349309285ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? -763460857 : 326960676;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = (short)19207;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
