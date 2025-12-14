#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)3227;
long long int var_2 = 3374179827854050312LL;
short var_4 = (short)16983;
long long int var_6 = -6799904377308094828LL;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)1;
short var_10 = (short)28600;
long long int var_11 = -3833711971463593165LL;
int zero = 0;
unsigned int var_12 = 542686768U;
int var_13 = -704743973;
_Bool var_14 = (_Bool)1;
int var_15 = 937964703;
unsigned short arr_2 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned short)50211 : (unsigned short)28334;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
