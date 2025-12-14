#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 420337660024711212LL;
signed char var_2 = (signed char)-59;
signed char var_4 = (signed char)-82;
int var_5 = -953586218;
unsigned int var_6 = 3514344932U;
_Bool var_7 = (_Bool)0;
unsigned char var_8 = (unsigned char)27;
short var_10 = (short)-22346;
int var_11 = 1235591836;
unsigned short var_12 = (unsigned short)31629;
unsigned char var_13 = (unsigned char)149;
unsigned long long int var_14 = 10259034247294598317ULL;
signed char var_16 = (signed char)-53;
unsigned long long int var_17 = 15306307594270620456ULL;
int zero = 0;
unsigned int var_18 = 3936848893U;
unsigned char var_19 = (unsigned char)54;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)20921;
short arr_4 [15] [15] ;
long long int arr_5 [21] ;
unsigned char arr_9 [21] ;
unsigned int arr_10 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = (short)10805;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = -3304152258421580059LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_9 [i_0] = (unsigned char)81;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_10 [i_0] = 44070074U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
