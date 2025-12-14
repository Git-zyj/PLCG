#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 12266340964108163813ULL;
unsigned long long int var_3 = 11670757235658568140ULL;
unsigned long long int var_5 = 18381320421952679406ULL;
int var_7 = 262608587;
unsigned short var_11 = (unsigned short)29409;
int zero = 0;
unsigned long long int var_16 = 5034792985674701883ULL;
unsigned int var_17 = 839991212U;
signed char var_18 = (signed char)29;
short var_19 = (short)-29038;
short var_20 = (short)1345;
short var_21 = (short)-8933;
_Bool arr_0 [22] ;
unsigned int arr_8 [22] [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = 822536921U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
