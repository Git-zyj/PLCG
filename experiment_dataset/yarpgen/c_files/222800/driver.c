#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)4128;
short var_1 = (short)20381;
signed char var_2 = (signed char)102;
unsigned int var_5 = 3970353359U;
int var_10 = 1520046018;
long long int var_12 = 8622346487790807189LL;
signed char var_15 = (signed char)-67;
int var_17 = -1998295637;
int zero = 0;
signed char var_18 = (signed char)91;
short var_19 = (short)4686;
long long int var_20 = 3330972966741120619LL;
unsigned short var_21 = (unsigned short)1520;
unsigned short var_22 = (unsigned short)27384;
short arr_0 [17] [17] ;
int arr_3 [10] ;
unsigned long long int arr_4 [10] ;
long long int arr_5 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-3171;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 1843633633;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = 14858235401999174711ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = -93767242672399040LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
