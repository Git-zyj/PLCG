#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)132;
short var_1 = (short)-31355;
unsigned char var_2 = (unsigned char)170;
signed char var_8 = (signed char)96;
short var_10 = (short)-27862;
unsigned int var_12 = 3417575438U;
unsigned int var_14 = 1195408182U;
long long int var_15 = 4104211201699029920LL;
int var_17 = -563972308;
int zero = 0;
unsigned int var_18 = 3912444786U;
int var_19 = 347187585;
unsigned int var_20 = 704956266U;
long long int var_21 = 1415211550280833447LL;
short var_22 = (short)-22246;
unsigned char var_23 = (unsigned char)24;
short arr_5 [24] [24] [24] ;
signed char arr_7 [22] ;
int arr_8 [22] ;
signed char arr_3 [24] ;
long long int arr_6 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)26562 : (short)7599;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = (signed char)-64;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = -1267927029;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (signed char)-18 : (signed char)-18;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? -7433990784453420821LL : -6403871166360982059LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
