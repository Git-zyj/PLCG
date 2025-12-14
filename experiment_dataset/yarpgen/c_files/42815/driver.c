#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-20683;
_Bool var_1 = (_Bool)1;
signed char var_2 = (signed char)-108;
unsigned short var_3 = (unsigned short)19944;
long long int var_4 = -72248622343247667LL;
unsigned short var_5 = (unsigned short)36252;
unsigned char var_6 = (unsigned char)121;
signed char var_7 = (signed char)30;
unsigned char var_8 = (unsigned char)255;
int var_9 = -1856790217;
long long int var_10 = -3843434162080149829LL;
int zero = 0;
unsigned char var_11 = (unsigned char)163;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)1;
long long int var_14 = -4653999366317980045LL;
unsigned short arr_2 [19] ;
long long int arr_4 [20] ;
long long int arr_5 [20] [20] ;
unsigned long long int arr_3 [19] [19] ;
signed char arr_6 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (unsigned short)27758;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = 7582101790731193012LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? 3867900050642876135LL : -5059075045942571855LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = 11924496951995238613ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (signed char)-11 : (signed char)54;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
