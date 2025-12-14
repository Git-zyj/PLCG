#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1410314020458480710LL;
short var_1 = (short)-17470;
unsigned char var_6 = (unsigned char)241;
short var_10 = (short)25510;
unsigned char var_11 = (unsigned char)239;
unsigned long long int var_12 = 6807982353680885720ULL;
short var_14 = (short)-29021;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned long long int var_16 = 15992298603110598572ULL;
long long int var_17 = 2436502577302897379LL;
long long int var_18 = -6097785487735891896LL;
unsigned long long int var_19 = 1070931646436310201ULL;
unsigned char var_20 = (unsigned char)164;
short var_21 = (short)19764;
unsigned short arr_5 [10] ;
long long int arr_6 [10] [10] ;
unsigned char arr_13 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (unsigned short)29760;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_6 [i_0] [i_1] = -2673320895646547853LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_13 [i_0] [i_1] = (unsigned char)112;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
