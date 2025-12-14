#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)199;
unsigned short var_1 = (unsigned short)32506;
unsigned short var_2 = (unsigned short)38213;
unsigned int var_3 = 1813748479U;
unsigned short var_5 = (unsigned short)46681;
signed char var_6 = (signed char)-110;
signed char var_10 = (signed char)50;
unsigned char var_11 = (unsigned char)254;
unsigned long long int var_13 = 15819260688550977899ULL;
int zero = 0;
short var_14 = (short)-8456;
long long int var_15 = -4708936338430505369LL;
int var_16 = 1447554910;
_Bool var_17 = (_Bool)1;
_Bool arr_0 [13] ;
unsigned char arr_1 [13] ;
unsigned char arr_5 [13] ;
int arr_6 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (unsigned char)75;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (unsigned char)206;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = -1174641855;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
