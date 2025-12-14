#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1693976294U;
signed char var_3 = (signed char)-49;
_Bool var_9 = (_Bool)1;
unsigned char var_11 = (unsigned char)29;
int zero = 0;
long long int var_20 = 5567587002376047521LL;
signed char var_21 = (signed char)113;
signed char var_22 = (signed char)39;
unsigned char var_23 = (unsigned char)217;
int var_24 = 53555261;
long long int var_25 = -2338571358101801461LL;
long long int var_26 = 1777305174789141146LL;
unsigned int var_27 = 2279901001U;
unsigned int var_28 = 1301575091U;
unsigned int arr_2 [15] [15] ;
unsigned int arr_3 [24] ;
unsigned char arr_4 [24] ;
long long int arr_6 [24] [24] ;
unsigned short arr_7 [24] [24] ;
long long int arr_9 [24] [24] ;
unsigned int arr_5 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = 2927654568U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = 3703132144U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (unsigned char)46;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_6 [i_0] [i_1] = 8277454179456258372LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)41096;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? 3547474287942879028LL : -2424982797122446085LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = 3538310593U;
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
