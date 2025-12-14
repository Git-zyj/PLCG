#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)26;
int var_5 = 410419714;
short var_8 = (short)-29531;
short var_10 = (short)5826;
short var_11 = (short)-31829;
long long int var_12 = -4807621783733284446LL;
int var_14 = 224820014;
unsigned short var_15 = (unsigned short)41908;
long long int var_17 = -5830684945872581939LL;
unsigned char var_18 = (unsigned char)248;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 8509185809799651508ULL;
long long int var_22 = 8922339207427713846LL;
short var_23 = (short)25435;
unsigned short var_24 = (unsigned short)5409;
int var_25 = -396985599;
_Bool var_26 = (_Bool)1;
unsigned short arr_1 [17] ;
unsigned int arr_3 [17] [17] ;
unsigned char arr_9 [10] [10] ;
unsigned long long int arr_4 [17] [17] [17] ;
unsigned short arr_12 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (unsigned short)1486;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = 2148146196U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned char)20;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 3234146044482364957ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_12 [i_0] = (unsigned short)46522;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_4 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
