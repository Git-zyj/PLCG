#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-24;
unsigned char var_3 = (unsigned char)236;
signed char var_7 = (signed char)64;
unsigned char var_8 = (unsigned char)69;
unsigned int var_9 = 2466587539U;
unsigned short var_10 = (unsigned short)56036;
unsigned int var_12 = 2566341855U;
long long int var_17 = 822612656522211538LL;
unsigned short var_18 = (unsigned short)18732;
int zero = 0;
unsigned int var_19 = 89752191U;
int var_20 = 1471381098;
unsigned short var_21 = (unsigned short)1921;
signed char var_22 = (signed char)-85;
short var_23 = (short)-23019;
int var_24 = -744807633;
unsigned long long int var_25 = 10048229353599869ULL;
unsigned short var_26 = (unsigned short)51980;
_Bool var_27 = (_Bool)1;
unsigned int var_28 = 60960031U;
signed char var_29 = (signed char)(-127 - 1);
signed char arr_0 [24] ;
unsigned short arr_1 [24] [24] ;
unsigned char arr_2 [24] ;
unsigned short arr_3 [24] ;
long long int arr_13 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (signed char)37;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)8828;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (unsigned char)179;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (unsigned short)7023;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -4871107684496931625LL : -4446107497634956548LL;
}

void checksum() {
    hash(&seed, var_19);
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
