#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)40041;
unsigned short var_1 = (unsigned short)27597;
short var_2 = (short)5339;
unsigned short var_5 = (unsigned short)21218;
long long int var_6 = 8451410962886254808LL;
_Bool var_7 = (_Bool)1;
unsigned short var_8 = (unsigned short)29509;
_Bool var_9 = (_Bool)0;
unsigned long long int var_11 = 2298483992879869204ULL;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)160;
unsigned int var_17 = 3239768856U;
int zero = 0;
unsigned char var_18 = (unsigned char)40;
unsigned short var_19 = (unsigned short)31317;
int var_20 = -1126548519;
unsigned char var_21 = (unsigned char)56;
unsigned int var_22 = 2789683694U;
int arr_0 [10] ;
_Bool arr_1 [10] ;
_Bool arr_3 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? -1377754938 : -952720218;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
