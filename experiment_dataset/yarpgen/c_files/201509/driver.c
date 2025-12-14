#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3183838182U;
unsigned int var_3 = 2573185442U;
unsigned short var_6 = (unsigned short)5426;
unsigned long long int var_7 = 3113515459740491069ULL;
_Bool var_8 = (_Bool)1;
unsigned int var_10 = 506875970U;
_Bool var_12 = (_Bool)1;
signed char var_17 = (signed char)114;
int zero = 0;
unsigned int var_19 = 2578938549U;
int var_20 = -908500738;
unsigned short var_21 = (unsigned short)3177;
_Bool var_22 = (_Bool)0;
_Bool arr_0 [13] ;
int arr_1 [13] ;
_Bool arr_4 [13] [13] ;
_Bool arr_5 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = -1631590087;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
