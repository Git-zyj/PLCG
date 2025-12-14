#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-22266;
signed char var_7 = (signed char)109;
unsigned long long int var_8 = 16624170522764538821ULL;
unsigned short var_12 = (unsigned short)30248;
int var_13 = -370259366;
unsigned long long int var_17 = 8670706851610569208ULL;
_Bool var_18 = (_Bool)1;
int zero = 0;
signed char var_19 = (signed char)18;
unsigned long long int var_20 = 15794101394797582302ULL;
signed char var_21 = (signed char)35;
short var_22 = (short)9148;
signed char var_23 = (signed char)-14;
int arr_1 [24] [24] ;
unsigned long long int arr_4 [24] ;
short arr_7 [12] [12] ;
unsigned int arr_2 [24] ;
short arr_9 [12] ;
unsigned int arr_10 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = 1986068424;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = 4946588461176593937ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_7 [i_0] [i_1] = (short)-7054;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 746971334U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_9 [i_0] = (short)-14402;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_10 [i_0] [i_1] = 2722332901U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
