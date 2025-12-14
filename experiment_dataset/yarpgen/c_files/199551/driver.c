#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)109;
_Bool var_1 = (_Bool)1;
unsigned short var_2 = (unsigned short)39260;
unsigned short var_3 = (unsigned short)7929;
signed char var_4 = (signed char)-20;
_Bool var_6 = (_Bool)1;
short var_7 = (short)14473;
_Bool var_8 = (_Bool)1;
unsigned long long int var_10 = 123942888169400797ULL;
unsigned long long int var_12 = 16920947817123494466ULL;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)108;
int zero = 0;
_Bool var_17 = (_Bool)0;
int var_18 = -462418292;
signed char var_19 = (signed char)-88;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)84;
unsigned short var_22 = (unsigned short)9424;
unsigned long long int arr_4 [12] ;
unsigned short arr_5 [12] ;
signed char arr_8 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = 10333491585953564477ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (unsigned short)3920;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = (signed char)-123;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
