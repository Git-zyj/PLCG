#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)63812;
short var_6 = (short)859;
unsigned long long int var_7 = 10302597101468774934ULL;
long long int var_11 = -2009767804624862904LL;
signed char var_16 = (signed char)-90;
int zero = 0;
unsigned short var_18 = (unsigned short)17035;
unsigned char var_19 = (unsigned char)245;
unsigned short var_20 = (unsigned short)9210;
signed char var_21 = (signed char)125;
int var_22 = -711168245;
unsigned char var_23 = (unsigned char)179;
short var_24 = (short)-26365;
unsigned char var_25 = (unsigned char)166;
signed char var_26 = (signed char)-95;
unsigned char arr_0 [16] ;
_Bool arr_2 [23] ;
long long int arr_3 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (unsigned char)155;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = -923896146111048736LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
