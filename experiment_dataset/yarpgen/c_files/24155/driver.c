#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)53294;
signed char var_2 = (signed char)-90;
signed char var_4 = (signed char)-67;
unsigned int var_6 = 3739242880U;
signed char var_7 = (signed char)56;
unsigned char var_8 = (unsigned char)221;
unsigned char var_10 = (unsigned char)130;
unsigned int var_12 = 1314202885U;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)58;
unsigned char var_18 = (unsigned char)218;
int zero = 0;
unsigned char var_20 = (unsigned char)140;
unsigned short var_21 = (unsigned short)19102;
unsigned short var_22 = (unsigned short)3140;
int var_23 = -148724760;
signed char var_24 = (signed char)-22;
unsigned int var_25 = 3006510200U;
short var_26 = (short)-5933;
unsigned int var_27 = 3417506738U;
unsigned int var_28 = 2629777832U;
_Bool var_29 = (_Bool)1;
unsigned char arr_0 [20] ;
unsigned char arr_1 [20] [20] ;
unsigned short arr_2 [20] ;
unsigned short arr_3 [22] ;
_Bool arr_4 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (unsigned char)147;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)102;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (unsigned short)59957;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (unsigned short)26934;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
