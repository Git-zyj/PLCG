#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 12722088022686024072ULL;
unsigned short var_14 = (unsigned short)29355;
_Bool var_16 = (_Bool)0;
unsigned long long int var_18 = 3535223167791320545ULL;
int zero = 0;
long long int var_19 = -2515351093001440991LL;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 11942526738690928524ULL;
long long int var_22 = -7594410812805070620LL;
_Bool var_23 = (_Bool)1;
short var_24 = (short)-5607;
unsigned char arr_0 [17] ;
_Bool arr_1 [17] ;
signed char arr_3 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (unsigned char)231;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (signed char)101;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
