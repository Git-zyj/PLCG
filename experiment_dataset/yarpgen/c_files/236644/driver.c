#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2890515284U;
_Bool var_2 = (_Bool)1;
short var_3 = (short)15095;
short var_4 = (short)17038;
unsigned char var_5 = (unsigned char)120;
unsigned char var_6 = (unsigned char)40;
unsigned int var_7 = 2291030450U;
_Bool var_9 = (_Bool)0;
unsigned short var_10 = (unsigned short)29788;
short var_12 = (short)5842;
int var_13 = -98641985;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned long long int var_16 = 14510389886152195323ULL;
long long int var_17 = 1152356937725663303LL;
signed char var_18 = (signed char)66;
long long int var_19 = 3687838294222048203LL;
unsigned int var_20 = 3344893768U;
unsigned int var_21 = 1301978147U;
unsigned int var_22 = 2845664126U;
unsigned short arr_1 [12] ;
int arr_2 [21] [21] ;
unsigned char arr_8 [21] ;
unsigned char arr_4 [21] ;
unsigned long long int arr_5 [21] ;
int arr_9 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (unsigned short)13551;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = 1995043278;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = (unsigned char)134;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (unsigned char)33;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = 16375105257117996149ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_9 [i_0] [i_1] = 1434408959;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
