#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)197;
unsigned int var_7 = 3480987992U;
unsigned long long int var_9 = 14533362609962585594ULL;
unsigned char var_10 = (unsigned char)144;
signed char var_12 = (signed char)-71;
unsigned short var_14 = (unsigned short)26328;
int zero = 0;
int var_17 = -345437087;
_Bool var_18 = (_Bool)0;
long long int var_19 = -2020618422659311943LL;
long long int var_20 = 3595322088853933617LL;
_Bool arr_0 [24] ;
unsigned short arr_2 [24] [24] ;
_Bool arr_4 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)7846;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
