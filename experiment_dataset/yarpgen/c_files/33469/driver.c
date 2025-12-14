#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)219;
unsigned char var_1 = (unsigned char)252;
unsigned short var_2 = (unsigned short)61778;
long long int var_3 = -398327072892160162LL;
long long int var_4 = -5021182534234379866LL;
long long int var_5 = 8939734434916366288LL;
unsigned long long int var_6 = 14379029670692086314ULL;
short var_7 = (short)-22242;
unsigned long long int var_8 = 14885583967308645098ULL;
long long int var_9 = 7310773710932305672LL;
short var_10 = (short)26867;
signed char var_11 = (signed char)106;
unsigned long long int var_12 = 14222638791045313154ULL;
unsigned int var_14 = 780575748U;
unsigned short var_16 = (unsigned short)19989;
int zero = 0;
short var_18 = (short)-17320;
signed char var_19 = (signed char)101;
unsigned char var_20 = (unsigned char)38;
_Bool var_21 = (_Bool)0;
signed char var_22 = (signed char)57;
_Bool var_23 = (_Bool)0;
signed char var_24 = (signed char)75;
signed char var_25 = (signed char)42;
unsigned char var_26 = (unsigned char)66;
short arr_0 [20] ;
unsigned long long int arr_1 [20] [20] ;
unsigned int arr_2 [20] ;
unsigned char arr_3 [24] [24] ;
signed char arr_5 [24] [24] ;
short arr_6 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (short)23540 : (short)29886;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = 1848167107840814583ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = 3175165076U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)77;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)-100;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_6 [i_0] [i_1] = (short)-27737;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
