#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-22536;
unsigned long long int var_2 = 4089040343734659679ULL;
signed char var_3 = (signed char)82;
short var_4 = (short)-26626;
_Bool var_5 = (_Bool)0;
unsigned short var_6 = (unsigned short)5263;
_Bool var_7 = (_Bool)0;
unsigned char var_11 = (unsigned char)196;
_Bool var_12 = (_Bool)0;
int var_13 = 1928708408;
_Bool var_15 = (_Bool)1;
unsigned char var_17 = (unsigned char)63;
unsigned short var_18 = (unsigned short)49526;
int var_19 = 857433423;
int zero = 0;
unsigned int var_20 = 62016274U;
unsigned int var_21 = 696018173U;
_Bool var_22 = (_Bool)0;
unsigned short var_23 = (unsigned short)31129;
unsigned char var_24 = (unsigned char)225;
long long int var_25 = 5211551360286562719LL;
long long int var_26 = -6984333909682751176LL;
long long int arr_0 [15] ;
unsigned char arr_1 [15] [15] ;
signed char arr_2 [15] [15] ;
unsigned char arr_3 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = -4270827695404707549LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)125;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-58;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)34;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
