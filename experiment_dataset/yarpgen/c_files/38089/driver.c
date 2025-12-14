#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2780693510U;
unsigned long long int var_1 = 2366413896203422473ULL;
unsigned char var_2 = (unsigned char)2;
unsigned short var_5 = (unsigned short)37197;
unsigned int var_6 = 620592167U;
unsigned int var_10 = 3179592022U;
unsigned char var_11 = (unsigned char)243;
unsigned int var_13 = 1577557310U;
int zero = 0;
unsigned int var_15 = 3108633884U;
unsigned char var_16 = (unsigned char)117;
unsigned char var_17 = (unsigned char)198;
long long int var_18 = -6879384109358208012LL;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 15687889278250383566ULL;
unsigned int arr_4 [23] [23] ;
_Bool arr_6 [23] [23] ;
signed char arr_11 [14] [14] ;
long long int arr_7 [23] ;
unsigned int arr_8 [23] [23] ;
unsigned char arr_12 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = 2059849604U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_11 [i_0] [i_1] = (signed char)-95;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 6800937995891708257LL : -2184682502080247875LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? 3820960803U : 2814005217U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_12 [i_0] = (unsigned char)168;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
