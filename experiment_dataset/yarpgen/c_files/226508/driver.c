#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_3 = 641964725;
short var_4 = (short)-19206;
_Bool var_6 = (_Bool)1;
_Bool var_9 = (_Bool)1;
int var_11 = -1206553600;
short var_13 = (short)-10005;
_Bool var_14 = (_Bool)1;
short var_15 = (short)6890;
signed char var_17 = (signed char)58;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 9982618496625497945ULL;
unsigned short var_20 = (unsigned short)12872;
short arr_14 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_14 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)29235 : (short)-25536;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
