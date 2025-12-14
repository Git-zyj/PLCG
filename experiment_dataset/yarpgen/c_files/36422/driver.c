#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)141;
unsigned char var_2 = (unsigned char)87;
long long int var_3 = 6661057809838387984LL;
unsigned short var_9 = (unsigned short)5577;
short var_10 = (short)-15745;
int zero = 0;
unsigned char var_11 = (unsigned char)34;
unsigned int var_12 = 211243963U;
unsigned char var_13 = (unsigned char)131;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 2230449553U;
short arr_0 [14] ;
short arr_6 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (short)-1963;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (short)-21280 : (short)13003;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
