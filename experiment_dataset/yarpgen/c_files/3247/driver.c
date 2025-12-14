#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 246066792U;
short var_2 = (short)-30945;
signed char var_3 = (signed char)46;
signed char var_6 = (signed char)-31;
signed char var_8 = (signed char)-18;
_Bool var_11 = (_Bool)1;
short var_12 = (short)1812;
unsigned long long int var_13 = 9815459827924043538ULL;
unsigned short var_14 = (unsigned short)49502;
unsigned long long int var_15 = 3546673916165513350ULL;
int zero = 0;
signed char var_19 = (signed char)84;
short var_20 = (short)18875;
short var_21 = (short)-12709;
unsigned short var_22 = (unsigned short)29039;
unsigned long long int var_23 = 4886016066984224154ULL;
int var_24 = -1582700209;
_Bool var_25 = (_Bool)0;
unsigned long long int var_26 = 9481116315143996714ULL;
unsigned char var_27 = (unsigned char)112;
short var_28 = (short)10769;
signed char var_29 = (signed char)-86;
short var_30 = (short)-20794;
_Bool var_31 = (_Bool)0;
_Bool arr_0 [16] ;
signed char arr_4 [14] ;
unsigned char arr_5 [14] ;
unsigned short arr_9 [14] [14] ;
unsigned long long int arr_16 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (signed char)24;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (unsigned char)240;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)3137 : (unsigned short)64756;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_16 [i_0] [i_1] = 5912817354803957840ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
