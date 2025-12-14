#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_1 = (unsigned short)65313;
unsigned long long int var_3 = 14468339288869854900ULL;
unsigned short var_4 = (unsigned short)37527;
unsigned short var_5 = (unsigned short)58610;
signed char var_7 = (signed char)-113;
int var_8 = 126552722;
unsigned char var_9 = (unsigned char)59;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 5504441471999166219ULL;
unsigned short var_12 = (unsigned short)26613;
unsigned char var_13 = (unsigned char)177;
unsigned char var_14 = (unsigned char)119;
int var_15 = -1583673188;
unsigned char var_16 = (unsigned char)93;
signed char var_17 = (signed char)-111;
int var_18 = 783517624;
unsigned char arr_0 [14] ;
unsigned char arr_1 [14] ;
unsigned int arr_3 [11] ;
short arr_5 [15] [15] ;
long long int arr_8 [15] ;
short arr_14 [15] [15] [15] [15] [15] ;
unsigned char arr_2 [14] ;
unsigned long long int arr_7 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (unsigned char)114;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (unsigned char)179;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 3421067238U : 844072648U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = (short)-12542;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = -4309710145476760733LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)-22661;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (unsigned char)187;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = 10995109513016884127ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
