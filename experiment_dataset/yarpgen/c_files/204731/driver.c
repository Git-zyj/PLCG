#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 539723394;
signed char var_5 = (signed char)23;
signed char var_7 = (signed char)-34;
short var_9 = (short)-22483;
unsigned char var_11 = (unsigned char)22;
_Bool var_12 = (_Bool)0;
int zero = 0;
signed char var_14 = (signed char)65;
unsigned short var_15 = (unsigned short)32288;
unsigned short var_16 = (unsigned short)38520;
signed char var_17 = (signed char)-95;
unsigned short var_18 = (unsigned short)29790;
_Bool var_19 = (_Bool)1;
signed char arr_0 [23] ;
unsigned long long int arr_1 [23] ;
int arr_2 [23] ;
int arr_3 [23] ;
signed char arr_5 [23] [23] ;
signed char arr_10 [20] [20] ;
_Bool arr_11 [20] [20] ;
unsigned char arr_6 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (signed char)-28;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 8468371678760180037ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = -617027507;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 1902940030;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)51;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_10 [i_0] [i_1] = (signed char)69;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_11 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (unsigned char)124;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
