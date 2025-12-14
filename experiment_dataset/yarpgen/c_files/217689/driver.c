#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-10278;
long long int var_2 = 164110260291602750LL;
unsigned char var_3 = (unsigned char)194;
signed char var_4 = (signed char)-115;
signed char var_5 = (signed char)34;
unsigned long long int var_7 = 11771915913959943059ULL;
unsigned long long int var_8 = 17585728140167426484ULL;
signed char var_10 = (signed char)97;
unsigned long long int var_12 = 15538139767373875857ULL;
unsigned short var_13 = (unsigned short)27816;
long long int var_15 = -8248449636345375059LL;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)179;
_Bool var_18 = (_Bool)0;
short arr_1 [12] [12] ;
unsigned int arr_2 [12] ;
signed char arr_3 [12] [12] ;
unsigned short arr_4 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)3048 : (short)-23996;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 3095425179U : 3480783710U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-19 : (signed char)38;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned short)19995 : (unsigned short)2535;
}

void checksum() {
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
