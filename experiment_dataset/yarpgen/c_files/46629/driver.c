#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1183711377U;
int var_3 = -365909727;
unsigned int var_7 = 4251669353U;
short var_9 = (short)24653;
int var_11 = -864258855;
unsigned char var_13 = (unsigned char)106;
int zero = 0;
unsigned char var_15 = (unsigned char)81;
unsigned long long int var_16 = 9534700616853662367ULL;
long long int var_17 = -2119279576714782405LL;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)30;
unsigned int var_20 = 819875833U;
_Bool var_21 = (_Bool)1;
signed char var_22 = (signed char)67;
unsigned long long int arr_3 [23] ;
short arr_6 [23] [23] [23] [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 381382478003981925ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_6 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)2283;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
