#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -741837674;
unsigned long long int var_6 = 9914219794881108634ULL;
unsigned long long int var_9 = 1462915471336055693ULL;
int var_11 = -1820238263;
unsigned int var_12 = 2952316440U;
unsigned short var_14 = (unsigned short)43618;
int var_15 = -1426101769;
int zero = 0;
long long int var_17 = 7636388705928984506LL;
unsigned short var_18 = (unsigned short)64398;
short var_19 = (short)-17244;
unsigned short var_20 = (unsigned short)41801;
_Bool var_21 = (_Bool)0;
signed char var_22 = (signed char)66;
unsigned long long int arr_0 [24] [24] ;
short arr_2 [24] [24] [24] ;
unsigned short arr_3 [24] ;
unsigned short arr_8 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = 6442985180256724170ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (short)-23486;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (unsigned short)23309;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned short)48356;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
