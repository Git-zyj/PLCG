#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)12168;
int var_5 = 972224362;
unsigned short var_11 = (unsigned short)44130;
unsigned long long int var_13 = 15597173750513257585ULL;
long long int var_14 = -7016469148851556793LL;
short var_15 = (short)4553;
_Bool var_16 = (_Bool)0;
unsigned long long int var_18 = 3817511816612297514ULL;
signed char var_19 = (signed char)2;
int zero = 0;
signed char var_20 = (signed char)87;
signed char var_21 = (signed char)43;
long long int var_22 = 773576925329521475LL;
_Bool var_23 = (_Bool)1;
unsigned long long int var_24 = 11530197997051504795ULL;
signed char var_25 = (signed char)84;
short var_26 = (short)-11513;
unsigned int var_27 = 3692736335U;
_Bool var_28 = (_Bool)0;
_Bool var_29 = (_Bool)0;
long long int arr_0 [25] ;
_Bool arr_4 [25] [25] ;
unsigned int arr_5 [25] [25] ;
short arr_7 [19] ;
unsigned char arr_6 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = -8182345969682228850LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = 1086425028U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = (short)29930;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)59 : (unsigned char)89;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
