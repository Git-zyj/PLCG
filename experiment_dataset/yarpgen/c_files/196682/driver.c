#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1758707132U;
_Bool var_1 = (_Bool)1;
unsigned short var_2 = (unsigned short)36590;
long long int var_4 = -5572194645122298145LL;
unsigned long long int var_5 = 9637070630478065946ULL;
_Bool var_6 = (_Bool)1;
unsigned int var_7 = 234019723U;
unsigned short var_9 = (unsigned short)52349;
int zero = 0;
unsigned int var_10 = 1931431603U;
unsigned long long int var_11 = 250247529555005830ULL;
unsigned short var_12 = (unsigned short)4094;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 3999852736U;
unsigned short arr_0 [23] ;
unsigned long long int arr_2 [23] [23] ;
unsigned long long int arr_7 [23] ;
unsigned char arr_4 [23] ;
unsigned short arr_10 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (unsigned short)41101;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = 13158072777661534823ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = 16472723979586707842ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned char)254 : (unsigned char)143;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)22602 : (unsigned short)23571;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
