#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_7 = (_Bool)0;
unsigned long long int var_16 = 78769774875850944ULL;
int zero = 0;
unsigned int var_17 = 1022167955U;
unsigned char var_18 = (unsigned char)48;
unsigned int var_19 = 4022770444U;
unsigned int var_20 = 3158473734U;
int var_21 = -1483387185;
signed char var_22 = (signed char)114;
unsigned int var_23 = 570356498U;
unsigned short var_24 = (unsigned short)49620;
unsigned long long int var_25 = 16041106896566013214ULL;
_Bool var_26 = (_Bool)1;
_Bool var_27 = (_Bool)0;
unsigned int var_28 = 127313504U;
unsigned int arr_0 [25] [25] ;
int arr_1 [25] ;
long long int arr_4 [25] [25] ;
_Bool arr_7 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = 3484109587U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = -175288247;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = 4176086354875504789LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
