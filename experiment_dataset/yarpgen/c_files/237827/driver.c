#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 369176886879492021LL;
_Bool var_4 = (_Bool)0;
unsigned int var_5 = 2530881238U;
int var_7 = 236085827;
short var_8 = (short)-25542;
unsigned short var_9 = (unsigned short)62212;
unsigned short var_11 = (unsigned short)580;
int zero = 0;
unsigned long long int var_13 = 5865349825123590030ULL;
short var_14 = (short)6712;
long long int var_15 = -6708000638710716627LL;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)67;
_Bool var_18 = (_Bool)0;
short arr_1 [10] [10] ;
long long int arr_5 [11] ;
unsigned int arr_6 [11] [11] ;
_Bool arr_8 [11] [11] [11] ;
signed char arr_10 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = (short)2896;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = 2393861569900427718LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_6 [i_0] [i_1] = 2336630512U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_10 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-65 : (signed char)-64;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
