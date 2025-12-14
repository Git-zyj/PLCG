#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 15321026420434336076ULL;
unsigned char var_3 = (unsigned char)17;
unsigned char var_5 = (unsigned char)208;
short var_6 = (short)-5001;
unsigned char var_7 = (unsigned char)110;
unsigned short var_9 = (unsigned short)38445;
unsigned int var_10 = 3347745394U;
signed char var_11 = (signed char)97;
int zero = 0;
unsigned short var_17 = (unsigned short)60411;
_Bool var_18 = (_Bool)0;
int var_19 = -1755430861;
unsigned long long int var_20 = 12579098654278683709ULL;
unsigned long long int var_21 = 7713301820655427212ULL;
unsigned long long int var_22 = 11085696071893401719ULL;
_Bool var_23 = (_Bool)1;
short var_24 = (short)-5502;
_Bool arr_1 [16] [16] ;
unsigned long long int arr_3 [16] ;
signed char arr_8 [16] ;
short arr_9 [16] [16] [16] ;
_Bool arr_2 [16] [16] ;
unsigned long long int arr_5 [16] ;
unsigned long long int arr_13 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 15364287337827403491ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = (signed char)-59;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (short)-15160;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = 7415903016476361262ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? 5710754018973249351ULL : 1596570201842040166ULL;
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
