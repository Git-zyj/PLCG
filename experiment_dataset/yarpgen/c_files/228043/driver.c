#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 62855457;
_Bool var_1 = (_Bool)0;
short var_2 = (short)27499;
short var_4 = (short)19781;
short var_5 = (short)-7890;
_Bool var_6 = (_Bool)0;
int var_7 = -2107978531;
unsigned long long int var_9 = 16482194799803867751ULL;
int zero = 0;
unsigned char var_10 = (unsigned char)163;
unsigned int var_11 = 3263039802U;
signed char var_12 = (signed char)-5;
unsigned int var_13 = 4019580253U;
short var_14 = (short)-18289;
long long int var_15 = -2803028482706633287LL;
signed char var_16 = (signed char)-124;
_Bool var_17 = (_Bool)1;
unsigned char arr_0 [15] ;
signed char arr_1 [15] [15] ;
long long int arr_4 [16] ;
int arr_5 [16] ;
signed char arr_6 [16] ;
short arr_2 [15] ;
unsigned long long int arr_3 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (unsigned char)77;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-6;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = -3997941360991780890LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = 1103343808;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = (signed char)124;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (short)27289;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = 3364096787381351721ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
