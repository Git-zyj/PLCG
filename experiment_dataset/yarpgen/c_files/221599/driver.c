#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15306363051028169077ULL;
long long int var_1 = 5703321150862490865LL;
unsigned char var_3 = (unsigned char)37;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)0;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 14939020555704857410ULL;
_Bool var_12 = (_Bool)0;
int var_13 = 481263141;
int zero = 0;
unsigned long long int var_15 = 11260059623557491524ULL;
unsigned long long int var_16 = 13878320058938498185ULL;
unsigned int var_17 = 724393057U;
_Bool var_18 = (_Bool)1;
short arr_9 [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)-13765 : (short)3349;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
