#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1183816125;
unsigned int var_3 = 947361149U;
signed char var_4 = (signed char)62;
unsigned int var_6 = 1196616963U;
_Bool var_8 = (_Bool)0;
unsigned char var_9 = (unsigned char)203;
unsigned int var_11 = 1580018202U;
_Bool var_12 = (_Bool)0;
long long int var_13 = 9026439367640481796LL;
_Bool var_14 = (_Bool)0;
short var_15 = (short)31832;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 3336363125U;
int zero = 0;
short var_18 = (short)16126;
unsigned short var_19 = (unsigned short)40135;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 3633143245U;
unsigned char var_22 = (unsigned char)126;
long long int arr_0 [15] ;
_Bool arr_1 [15] [15] ;
long long int arr_2 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 1127687096993430647LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 1614076443563639404LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
