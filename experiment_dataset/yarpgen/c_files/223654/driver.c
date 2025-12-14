#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)172;
unsigned char var_1 = (unsigned char)158;
short var_3 = (short)-1416;
unsigned long long int var_4 = 4726611559341760099ULL;
int var_5 = -1423410238;
signed char var_6 = (signed char)10;
long long int var_7 = -3034893624310777588LL;
short var_8 = (short)-28784;
signed char var_9 = (signed char)-124;
int zero = 0;
unsigned int var_10 = 2864353266U;
unsigned short var_11 = (unsigned short)43922;
short var_12 = (short)2296;
unsigned char var_13 = (unsigned char)142;
short arr_0 [16] ;
long long int arr_1 [16] ;
unsigned int arr_4 [13] ;
signed char arr_2 [16] [16] ;
unsigned long long int arr_5 [13] [13] ;
long long int arr_6 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (short)14044;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = -6889115897738737435LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = 4097042656U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)57;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? 44918895571819831ULL : 14112015627861044969ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? -2081455598241124631LL : -6627128135713948916LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
