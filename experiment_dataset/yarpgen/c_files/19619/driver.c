#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8311178012912939543LL;
unsigned short var_3 = (unsigned short)20950;
_Bool var_4 = (_Bool)0;
unsigned short var_7 = (unsigned short)44218;
signed char var_10 = (signed char)86;
short var_11 = (short)14924;
int zero = 0;
unsigned char var_12 = (unsigned char)250;
unsigned short var_13 = (unsigned short)9999;
short var_14 = (short)28906;
unsigned short var_15 = (unsigned short)8815;
unsigned int var_16 = 284622370U;
short var_17 = (short)14511;
short var_18 = (short)6040;
short arr_1 [13] ;
_Bool arr_3 [13] ;
_Bool arr_4 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (short)27004;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
