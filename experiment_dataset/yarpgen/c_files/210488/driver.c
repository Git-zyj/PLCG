#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)9837;
int var_1 = -1602790606;
unsigned char var_2 = (unsigned char)205;
unsigned long long int var_5 = 16308134048234330935ULL;
unsigned long long int var_6 = 11831129803394158259ULL;
short var_8 = (short)-23498;
signed char var_10 = (signed char)113;
unsigned long long int var_11 = 12962689572332539104ULL;
unsigned short var_13 = (unsigned short)2674;
unsigned short var_14 = (unsigned short)15837;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 15995616402912211834ULL;
long long int var_17 = -6286092270126923957LL;
int zero = 0;
unsigned char var_18 = (unsigned char)190;
unsigned long long int var_19 = 16730544010814635386ULL;
unsigned int var_20 = 2233043154U;
short var_21 = (short)-22197;
signed char var_22 = (signed char)75;
int var_23 = 1701617752;
signed char var_24 = (signed char)98;
_Bool var_25 = (_Bool)1;
unsigned int arr_0 [13] ;
long long int arr_5 [14] ;
int arr_6 [14] [14] ;
long long int arr_4 [13] ;
short arr_7 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 3899830400U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = 6454185298116723985LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_6 [i_0] [i_1] = 1600699317;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = -6569203959779840826LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = (short)857;
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
