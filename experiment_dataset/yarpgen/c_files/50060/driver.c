#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2232640332893517724ULL;
unsigned long long int var_2 = 4894009172197027024ULL;
unsigned short var_4 = (unsigned short)54360;
unsigned int var_5 = 2991230984U;
long long int var_6 = -7435993706260458586LL;
short var_7 = (short)23694;
unsigned short var_8 = (unsigned short)27400;
long long int var_9 = -560691868190437278LL;
int zero = 0;
unsigned short var_10 = (unsigned short)30836;
unsigned int var_11 = 3573651524U;
unsigned short var_12 = (unsigned short)22503;
long long int var_13 = 2080992237892972227LL;
long long int var_14 = 3313512717278972885LL;
signed char var_15 = (signed char)114;
unsigned int arr_0 [18] ;
unsigned short arr_7 [18] ;
_Bool arr_9 [18] [18] ;
long long int arr_3 [18] ;
signed char arr_4 [18] ;
unsigned int arr_11 [18] ;
long long int arr_12 [18] ;
signed char arr_13 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 2176646238U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = (unsigned short)34787;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_9 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = 4677456134217454542LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (signed char)-42;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_11 [i_0] = 1549957436U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_12 [i_0] = 8827451615892029063LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_13 [i_0] = (signed char)-38;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
