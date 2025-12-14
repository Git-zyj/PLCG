#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1578390544;
int var_2 = -1999691057;
unsigned short var_4 = (unsigned short)34832;
_Bool var_8 = (_Bool)0;
unsigned char var_11 = (unsigned char)148;
signed char var_12 = (signed char)87;
unsigned short var_14 = (unsigned short)36988;
unsigned short var_15 = (unsigned short)9128;
int zero = 0;
unsigned short var_16 = (unsigned short)48094;
unsigned char var_17 = (unsigned char)110;
int var_18 = 2124520660;
long long int var_19 = 6362751319323971357LL;
unsigned short arr_1 [16] ;
unsigned long long int arr_5 [16] ;
unsigned short arr_6 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned short)57593 : (unsigned short)25385;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 7065539228336582044ULL : 4416974821290430822ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)1074 : (unsigned short)6439;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
