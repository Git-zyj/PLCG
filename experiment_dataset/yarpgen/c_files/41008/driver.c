#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1833383651U;
unsigned int var_5 = 2432440239U;
_Bool var_9 = (_Bool)1;
unsigned int var_10 = 1674490231U;
unsigned long long int var_11 = 7845716454072885819ULL;
unsigned long long int var_12 = 6805065652335175304ULL;
unsigned long long int var_13 = 8388629432283378904ULL;
unsigned long long int var_15 = 7979854431815410523ULL;
int zero = 0;
signed char var_16 = (signed char)125;
unsigned short var_17 = (unsigned short)25572;
unsigned short var_18 = (unsigned short)35725;
short var_19 = (short)24890;
unsigned short var_20 = (unsigned short)29839;
unsigned int var_21 = 1713748606U;
unsigned long long int arr_1 [24] [24] ;
unsigned long long int arr_4 [24] [24] ;
int arr_5 [24] ;
_Bool arr_6 [24] [24] ;
short arr_7 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = 12174291669304611622ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = 17374720028773404760ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? -1631588155 : -2021508741;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)31543 : (short)7107;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
