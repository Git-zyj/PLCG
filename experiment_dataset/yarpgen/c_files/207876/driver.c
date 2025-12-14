#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 11621196910791340117ULL;
long long int var_5 = -6430379205761434965LL;
short var_6 = (short)-5962;
signed char var_7 = (signed char)-39;
unsigned char var_8 = (unsigned char)94;
unsigned short var_9 = (unsigned short)21145;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)3593;
signed char var_13 = (signed char)108;
unsigned char var_14 = (unsigned char)173;
int zero = 0;
signed char var_16 = (signed char)-127;
unsigned int var_17 = 1635479954U;
long long int var_18 = 6977399932618667761LL;
unsigned long long int var_19 = 15155552635654763876ULL;
long long int var_20 = -8676653231322451454LL;
unsigned short var_21 = (unsigned short)28225;
unsigned short var_22 = (unsigned short)40903;
unsigned int arr_0 [22] ;
int arr_1 [22] ;
int arr_2 [22] [22] ;
int arr_4 [22] [22] ;
int arr_6 [22] [22] ;
signed char arr_7 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 1035499878U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 2124173337;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = 141675840;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = -1656971665;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_6 [i_0] [i_1] = -492876330;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = (signed char)79;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
