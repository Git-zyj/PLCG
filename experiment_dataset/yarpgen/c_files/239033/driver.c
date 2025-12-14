#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 305743669;
unsigned short var_2 = (unsigned short)59654;
long long int var_4 = 3531963135535091607LL;
_Bool var_5 = (_Bool)1;
long long int var_6 = 5694670316525230589LL;
int var_7 = -1909185600;
long long int var_9 = -8805081905805663432LL;
_Bool var_10 = (_Bool)1;
unsigned char var_11 = (unsigned char)45;
short var_12 = (short)2756;
int zero = 0;
unsigned short var_13 = (unsigned short)60164;
int var_14 = -1880898972;
signed char var_15 = (signed char)0;
signed char var_16 = (signed char)-95;
short var_17 = (short)-22721;
signed char var_18 = (signed char)116;
unsigned char var_19 = (unsigned char)172;
short var_20 = (short)-12560;
int arr_0 [21] [21] ;
_Bool arr_1 [21] ;
unsigned char arr_3 [16] ;
unsigned char arr_4 [16] ;
unsigned char arr_2 [21] ;
int arr_5 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = -505089241;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned char)114 : (unsigned char)189;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (unsigned char)203;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (unsigned char)221;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? -1029144823 : -2103108503;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
