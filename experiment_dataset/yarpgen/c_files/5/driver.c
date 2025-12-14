#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)8;
signed char var_7 = (signed char)-63;
int var_16 = 2004156133;
int zero = 0;
signed char var_18 = (signed char)70;
int var_19 = -1207282270;
long long int var_20 = 8965815102314487198LL;
long long int var_21 = -3967021632964153473LL;
unsigned int var_22 = 3343486457U;
int var_23 = 745476594;
int var_24 = -1504000216;
unsigned char var_25 = (unsigned char)85;
unsigned int var_26 = 2973247510U;
_Bool var_27 = (_Bool)1;
signed char arr_0 [25] ;
short arr_1 [25] ;
unsigned int arr_2 [25] [25] ;
unsigned short arr_5 [15] ;
unsigned int arr_6 [15] ;
signed char arr_12 [24] ;
long long int arr_3 [25] ;
unsigned short arr_4 [25] ;
unsigned int arr_13 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (signed char)-117 : (signed char)-36;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (short)703;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = 768301036U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (unsigned short)42096;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = 1392086319U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_12 [i_0] = (signed char)-41;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 8044639821995879277LL : -4183622729146860592LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned short)35867 : (unsigned short)37129;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_13 [i_0] = 815729255U;
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
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
