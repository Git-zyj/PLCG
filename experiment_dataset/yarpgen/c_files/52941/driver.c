#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15759182462474374336ULL;
signed char var_2 = (signed char)(-127 - 1);
unsigned int var_5 = 2641032102U;
unsigned short var_6 = (unsigned short)10223;
long long int var_7 = -966568601576122212LL;
unsigned char var_10 = (unsigned char)109;
short var_11 = (short)30206;
int zero = 0;
unsigned long long int var_12 = 17334247448272645494ULL;
signed char var_13 = (signed char)-127;
_Bool var_14 = (_Bool)1;
long long int var_15 = -2811082496255360919LL;
long long int var_16 = -4653384096194662268LL;
unsigned int var_17 = 49381443U;
long long int var_18 = 5049000550807596857LL;
_Bool arr_0 [19] ;
_Bool arr_1 [19] ;
_Bool arr_2 [13] ;
signed char arr_3 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (signed char)65;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
