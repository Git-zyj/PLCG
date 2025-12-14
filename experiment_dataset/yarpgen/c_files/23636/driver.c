#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)71;
unsigned char var_3 = (unsigned char)241;
unsigned long long int var_5 = 13690724600542564163ULL;
short var_6 = (short)12086;
long long int var_7 = 2188908311116019609LL;
unsigned char var_8 = (unsigned char)159;
long long int var_9 = 8251554351685170372LL;
_Bool var_10 = (_Bool)1;
unsigned char var_11 = (unsigned char)203;
long long int var_12 = 8071860837624903232LL;
unsigned short var_13 = (unsigned short)2581;
int zero = 0;
long long int var_14 = 7184135615382666247LL;
short var_15 = (short)13332;
unsigned long long int var_16 = 17417412462231276609ULL;
unsigned char var_17 = (unsigned char)59;
int var_18 = -121348529;
int var_19 = -626145723;
unsigned int var_20 = 388301561U;
int var_21 = 2023535516;
unsigned int var_22 = 990908955U;
unsigned short arr_2 [16] [16] ;
signed char arr_8 [16] ;
short arr_11 [16] [16] [16] ;
unsigned char arr_12 [16] [16] ;
unsigned char arr_14 [16] ;
long long int arr_18 [16] ;
long long int arr_5 [16] ;
_Bool arr_13 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)65426;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (signed char)-59 : (signed char)-119;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)-24663 : (short)18026;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_12 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)237 : (unsigned char)15;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (unsigned char)17 : (unsigned char)135;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_18 [i_0] = -7608431719803567217LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 5893292721712636755LL : -7306980824786517584LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
