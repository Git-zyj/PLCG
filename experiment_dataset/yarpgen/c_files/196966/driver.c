#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)218;
long long int var_3 = 1697430564429382023LL;
unsigned char var_4 = (unsigned char)29;
long long int var_6 = 7734257741049646218LL;
_Bool var_7 = (_Bool)0;
short var_14 = (short)-16154;
unsigned long long int var_17 = 14203763692245124941ULL;
int zero = 0;
unsigned int var_19 = 2592195252U;
unsigned char var_20 = (unsigned char)170;
int var_21 = 52605131;
long long int var_22 = 8544368511014885599LL;
unsigned char var_23 = (unsigned char)91;
long long int var_24 = -4988128407553855417LL;
unsigned short var_25 = (unsigned short)27271;
unsigned char var_26 = (unsigned char)13;
signed char var_27 = (signed char)-3;
long long int var_28 = -7701001033450849344LL;
short arr_2 [25] [25] ;
unsigned long long int arr_3 [25] [25] [25] ;
unsigned long long int arr_7 [25] [25] [25] ;
unsigned char arr_9 [25] [25] [25] [25] ;
short arr_15 [24] [24] ;
signed char arr_14 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (short)5993;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 1840013495637958594ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 2699026921817015093ULL : 13066018413920824087ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (unsigned char)245;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_15 [i_0] [i_1] = (short)-22135;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_14 [i_0] = (signed char)-89;
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
