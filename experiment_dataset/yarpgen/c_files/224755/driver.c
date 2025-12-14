#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)39;
short var_1 = (short)-16370;
int var_2 = 2140165026;
unsigned long long int var_4 = 11730225985963881438ULL;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 2974457343U;
short var_7 = (short)24460;
unsigned int var_8 = 3558995839U;
long long int var_9 = 4165347388514306215LL;
unsigned int var_10 = 1926400073U;
_Bool var_11 = (_Bool)1;
long long int var_12 = 1625969273377522437LL;
int zero = 0;
unsigned short var_13 = (unsigned short)24289;
unsigned short var_14 = (unsigned short)34261;
short var_15 = (short)30874;
long long int var_16 = -6948583057565805718LL;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)1;
short var_19 = (short)-25821;
signed char var_20 = (signed char)-61;
signed char var_21 = (signed char)-84;
unsigned int arr_0 [21] ;
short arr_1 [21] ;
unsigned short arr_2 [21] ;
unsigned int arr_6 [21] ;
_Bool arr_4 [21] ;
long long int arr_9 [21] ;
unsigned char arr_12 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 3496266029U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (short)-28169 : (short)-11201;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (unsigned short)52354;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = 3555920103U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_9 [i_0] = -7809459793993693915LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_12 [i_0] = (unsigned char)135;
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
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
