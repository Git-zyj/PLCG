#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)22541;
short var_2 = (short)-18717;
short var_6 = (short)16061;
signed char var_8 = (signed char)-81;
unsigned long long int var_11 = 7903778997417193780ULL;
signed char var_12 = (signed char)-13;
signed char var_13 = (signed char)-31;
unsigned short var_15 = (unsigned short)1244;
short var_16 = (short)-23024;
unsigned short var_17 = (unsigned short)25248;
unsigned short var_18 = (unsigned short)63131;
int zero = 0;
short var_19 = (short)-30449;
unsigned long long int var_20 = 3716256884439113161ULL;
_Bool var_21 = (_Bool)0;
unsigned int var_22 = 51406156U;
int arr_4 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 1822235181;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_4 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
