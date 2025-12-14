#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3204051782850128097ULL;
short var_1 = (short)5412;
unsigned long long int var_2 = 8987787112552263005ULL;
unsigned int var_3 = 3409009932U;
_Bool var_5 = (_Bool)0;
long long int var_9 = 7726012114697484702LL;
short var_12 = (short)-6937;
int zero = 0;
signed char var_14 = (signed char)-24;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)136;
long long int var_17 = 8205565212125695224LL;
unsigned long long int var_18 = 2566453206982862325ULL;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 2585034487U;
unsigned short arr_0 [20] ;
_Bool arr_1 [20] ;
short arr_4 [20] [20] ;
int arr_5 [20] [20] ;
unsigned int arr_6 [20] ;
unsigned char arr_7 [20] ;
unsigned char arr_9 [20] ;
unsigned short arr_2 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (unsigned short)39621;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-16918;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = -1936647209;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = 643675427U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = (unsigned char)191;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_9 [i_0] = (unsigned char)238;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (unsigned short)43661;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
