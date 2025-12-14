#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-14745;
short var_8 = (short)1986;
_Bool var_9 = (_Bool)0;
signed char var_11 = (signed char)-84;
unsigned int var_12 = 4187728579U;
short var_14 = (short)-31262;
int zero = 0;
unsigned short var_16 = (unsigned short)46874;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)109;
unsigned char var_19 = (unsigned char)252;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)41;
unsigned short var_22 = (unsigned short)3525;
long long int var_23 = 9041882985128636771LL;
short arr_0 [21] ;
unsigned short arr_1 [21] ;
unsigned char arr_3 [21] [21] ;
int arr_4 [21] [21] ;
long long int arr_5 [21] [21] ;
unsigned int arr_7 [21] ;
unsigned long long int arr_8 [21] ;
signed char arr_2 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (short)-30673;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (unsigned short)23166;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)214;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = -1985272612;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = 3137670630072063218LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = 798871284U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = 2939879931293082328ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (signed char)65;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
