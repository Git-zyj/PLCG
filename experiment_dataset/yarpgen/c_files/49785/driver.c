#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-14;
_Bool var_1 = (_Bool)1;
unsigned char var_2 = (unsigned char)93;
int var_3 = 1414211967;
long long int var_6 = 1691793902766634281LL;
int var_7 = -1137246028;
unsigned short var_10 = (unsigned short)26674;
int var_11 = -1090399533;
int zero = 0;
signed char var_14 = (signed char)-27;
signed char var_15 = (signed char)44;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 352730779253867335ULL;
_Bool arr_0 [11] [11] ;
int arr_1 [11] ;
int arr_6 [11] [11] ;
signed char arr_9 [11] [11] ;
short arr_10 [11] [11] [11] [11] ;
signed char arr_12 [11] ;
int arr_13 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 1354303687;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_6 [i_0] [i_1] = -642262766;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_9 [i_0] [i_1] = (signed char)-83;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (short)-21538;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_12 [i_0] = (signed char)-62;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_13 [i_0] = -1570480558;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
