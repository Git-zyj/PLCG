#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5402341167213469290ULL;
unsigned char var_1 = (unsigned char)212;
signed char var_3 = (signed char)(-127 - 1);
int var_4 = 247214400;
signed char var_5 = (signed char)-40;
unsigned int var_6 = 965019041U;
unsigned int var_7 = 2289400532U;
signed char var_8 = (signed char)45;
unsigned char var_9 = (unsigned char)140;
unsigned int var_10 = 2011073387U;
long long int var_11 = 4730791833738906256LL;
unsigned short var_12 = (unsigned short)65289;
signed char var_13 = (signed char)6;
_Bool var_15 = (_Bool)1;
int var_16 = -1310698952;
int zero = 0;
unsigned char var_17 = (unsigned char)207;
signed char var_18 = (signed char)46;
short var_19 = (short)-2219;
long long int var_20 = 88691406539645118LL;
unsigned char var_21 = (unsigned char)199;
unsigned char var_22 = (unsigned char)86;
short var_23 = (short)-9222;
long long int var_24 = -9183567642576674551LL;
signed char var_25 = (signed char)-47;
short var_26 = (short)1632;
unsigned int var_27 = 3841101390U;
_Bool arr_0 [19] ;
long long int arr_1 [19] [19] ;
short arr_3 [19] [19] ;
_Bool arr_2 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = -8287277052770807257LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-20455;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
