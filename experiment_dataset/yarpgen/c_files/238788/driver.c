#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15138126467996062270ULL;
_Bool var_2 = (_Bool)0;
_Bool var_3 = (_Bool)0;
long long int var_6 = 3782832439538041782LL;
unsigned char var_8 = (unsigned char)35;
unsigned char var_9 = (unsigned char)23;
unsigned char var_11 = (unsigned char)89;
unsigned long long int var_14 = 13614773641172310130ULL;
int zero = 0;
unsigned int var_15 = 175986698U;
unsigned char var_16 = (unsigned char)32;
short var_17 = (short)1927;
long long int var_18 = -1041347581922191221LL;
short arr_7 [12] [12] ;
short arr_8 [12] ;
long long int arr_12 [11] ;
_Bool arr_18 [13] ;
signed char arr_19 [13] ;
long long int arr_20 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)16603 : (short)19994;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (short)2204 : (short)-18961;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? 5660937942015464161LL : -346796121700900624LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_18 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_19 [i_0] = (signed char)-87;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_20 [i_0] = -1510054578791880583LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_20 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
