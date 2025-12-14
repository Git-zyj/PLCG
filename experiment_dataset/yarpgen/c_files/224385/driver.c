#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-31468;
long long int var_2 = 1878377060470096047LL;
signed char var_4 = (signed char)-9;
unsigned char var_5 = (unsigned char)5;
long long int var_6 = 8410209948033812860LL;
long long int var_7 = 1034334925303241014LL;
short var_11 = (short)-6842;
unsigned short var_12 = (unsigned short)32229;
short var_13 = (short)-12097;
unsigned int var_14 = 4219206247U;
unsigned short var_16 = (unsigned short)22536;
int zero = 0;
unsigned char var_17 = (unsigned char)175;
unsigned short var_18 = (unsigned short)30585;
unsigned long long int var_19 = 18411673464747762485ULL;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)62;
long long int arr_0 [18] ;
unsigned int arr_7 [18] [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = -3674310203496763718LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 12832149U : 1950453320U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    hash(&seed, arr_7 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
