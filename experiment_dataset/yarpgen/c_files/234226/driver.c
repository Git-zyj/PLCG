#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-39;
long long int var_1 = 9135858567517004854LL;
signed char var_2 = (signed char)-113;
signed char var_4 = (signed char)-69;
unsigned char var_5 = (unsigned char)42;
signed char var_6 = (signed char)71;
unsigned short var_8 = (unsigned short)51431;
long long int var_11 = -2023464014371687759LL;
signed char var_12 = (signed char)96;
signed char var_13 = (signed char)10;
_Bool var_14 = (_Bool)1;
int var_15 = 1890139958;
signed char var_16 = (signed char)-1;
_Bool var_17 = (_Bool)1;
long long int var_19 = -2389479518647670152LL;
int zero = 0;
unsigned short var_20 = (unsigned short)39951;
signed char var_21 = (signed char)-126;
signed char var_22 = (signed char)-99;
short var_23 = (short)-17656;
unsigned int var_24 = 3347804956U;
short var_25 = (short)22700;
unsigned char arr_0 [15] ;
short arr_1 [15] ;
_Bool arr_3 [15] ;
short arr_4 [15] [15] [15] ;
unsigned int arr_5 [15] ;
signed char arr_6 [15] [15] ;
int arr_8 [15] [15] [15] [15] ;
unsigned long long int arr_9 [15] [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (unsigned char)65;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (short)-22873;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (short)24994;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = 2137031498U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)112;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = -95309391;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 10203330151244225727ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
