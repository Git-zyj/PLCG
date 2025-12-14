#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3281435455U;
unsigned char var_1 = (unsigned char)116;
int var_2 = 1301993156;
unsigned short var_3 = (unsigned short)34059;
unsigned short var_4 = (unsigned short)30284;
unsigned short var_5 = (unsigned short)26983;
unsigned int var_7 = 1783701940U;
unsigned char var_8 = (unsigned char)195;
unsigned char var_9 = (unsigned char)207;
long long int var_10 = 2545819035198542141LL;
unsigned int var_11 = 1423568583U;
int zero = 0;
signed char var_12 = (signed char)-39;
unsigned char var_13 = (unsigned char)234;
unsigned int var_14 = 1702415754U;
unsigned char var_15 = (unsigned char)176;
unsigned short var_16 = (unsigned short)49230;
unsigned char arr_0 [11] ;
long long int arr_1 [11] ;
unsigned short arr_4 [21] ;
unsigned int arr_5 [21] ;
_Bool arr_2 [11] ;
unsigned short arr_3 [11] ;
long long int arr_6 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (unsigned char)99;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 4955818350570712185LL : -2138133633840016505LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (unsigned short)49205;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = 1217994874U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned short)30480 : (unsigned short)65467;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_6 [i_0] [i_1] = -5022794092006429585LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
