#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-184;
unsigned char var_3 = (unsigned char)73;
_Bool var_4 = (_Bool)1;
unsigned int var_6 = 1144198081U;
long long int var_7 = 4237532135613156048LL;
long long int var_8 = 2299019953583708989LL;
signed char var_10 = (signed char)-83;
int var_11 = -2003685897;
unsigned char var_12 = (unsigned char)87;
int zero = 0;
short var_13 = (short)-18734;
short var_14 = (short)-13198;
unsigned short var_15 = (unsigned short)49732;
signed char var_16 = (signed char)-18;
long long int arr_0 [16] [16] ;
unsigned char arr_1 [16] ;
int arr_4 [14] ;
_Bool arr_5 [14] ;
long long int arr_2 [16] ;
unsigned int arr_3 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = 8547145841619276320LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (unsigned char)148;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = -449991047;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = 7197433885437999344LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 3996092673U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
