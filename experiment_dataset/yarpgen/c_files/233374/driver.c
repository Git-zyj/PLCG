#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1563803724;
unsigned long long int var_2 = 16673170545910311815ULL;
unsigned long long int var_3 = 2944261044843542827ULL;
short var_4 = (short)-10276;
_Bool var_5 = (_Bool)1;
short var_7 = (short)-585;
unsigned char var_8 = (unsigned char)59;
_Bool var_9 = (_Bool)0;
unsigned long long int var_10 = 8676231047324529646ULL;
long long int var_14 = -5323762623357813884LL;
int var_15 = -738165594;
_Bool var_17 = (_Bool)0;
int var_18 = 7834066;
int zero = 0;
short var_19 = (short)29777;
unsigned int var_20 = 1140557401U;
unsigned char var_21 = (unsigned char)31;
unsigned char var_22 = (unsigned char)241;
int var_23 = 10021623;
short arr_0 [15] ;
_Bool arr_2 [15] ;
int arr_3 [15] ;
unsigned int arr_4 [15] [15] ;
int arr_5 [15] [15] ;
short arr_8 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (short)-7735;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = -1739573480;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? 1447040333U : 644827026U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? -1390705643 : -1549085188;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (short)-19910 : (short)-3436;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
