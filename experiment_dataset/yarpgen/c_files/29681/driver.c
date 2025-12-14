#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 523282941U;
unsigned long long int var_1 = 10309784645360372041ULL;
_Bool var_2 = (_Bool)1;
unsigned char var_3 = (unsigned char)224;
unsigned short var_4 = (unsigned short)40621;
_Bool var_5 = (_Bool)0;
unsigned char var_8 = (unsigned char)7;
long long int var_11 = 3960488432558610065LL;
_Bool var_12 = (_Bool)1;
int zero = 0;
_Bool var_14 = (_Bool)1;
long long int var_15 = -4799550109478188181LL;
short var_16 = (short)4017;
unsigned short var_17 = (unsigned short)47833;
unsigned char arr_1 [16] ;
unsigned long long int arr_2 [16] ;
int arr_7 [21] [21] [21] ;
signed char arr_3 [16] ;
unsigned long long int arr_10 [21] [21] ;
unsigned int arr_11 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (unsigned char)93;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = 6844262797071471168ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = -1798961400;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (signed char)-76;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? 11599566227523969818ULL : 488534707790489974ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 2706375060U : 3434884773U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
