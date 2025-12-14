#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-22804;
int var_4 = 447275894;
long long int var_6 = 788303960493541214LL;
short var_9 = (short)31576;
unsigned char var_11 = (unsigned char)41;
unsigned long long int var_12 = 185540193591281610ULL;
int var_14 = 1344312885;
_Bool var_15 = (_Bool)1;
short var_16 = (short)6963;
unsigned long long int var_17 = 14320056579034659297ULL;
int zero = 0;
int var_20 = -1212860963;
short var_21 = (short)16266;
unsigned long long int var_22 = 4563286265062153326ULL;
unsigned long long int var_23 = 442756283340689776ULL;
unsigned short arr_2 [11] ;
int arr_6 [11] [11] ;
unsigned int arr_7 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (unsigned short)35487;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_6 [i_0] [i_1] = 2004115193;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_7 [i_0] [i_1] = 2171273858U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
