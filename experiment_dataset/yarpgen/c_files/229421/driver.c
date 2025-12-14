#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)102;
unsigned short var_3 = (unsigned short)30069;
unsigned char var_4 = (unsigned char)90;
short var_6 = (short)26084;
short var_12 = (short)-9408;
unsigned short var_13 = (unsigned short)30269;
short var_14 = (short)-8540;
unsigned short var_15 = (unsigned short)23071;
int zero = 0;
unsigned short var_16 = (unsigned short)33334;
unsigned long long int var_17 = 12497411421597444260ULL;
signed char var_18 = (signed char)-87;
unsigned long long int var_19 = 12065366821800888079ULL;
int var_20 = -1633258060;
long long int var_21 = -5864802604314042443LL;
signed char var_22 = (signed char)96;
unsigned long long int var_23 = 14130171218916057368ULL;
_Bool arr_0 [11] ;
unsigned int arr_1 [11] ;
short arr_2 [11] ;
signed char arr_3 [10] ;
long long int arr_5 [10] ;
signed char arr_6 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 2420768401U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (short)-5219;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (signed char)-111;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = -478919972708945015LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)50;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
