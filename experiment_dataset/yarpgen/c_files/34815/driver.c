#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)3061;
_Bool var_5 = (_Bool)0;
short var_8 = (short)-18088;
short var_9 = (short)3760;
_Bool var_14 = (_Bool)1;
int zero = 0;
int var_17 = 1679403081;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 2732895984U;
_Bool arr_0 [13] ;
int arr_1 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 672151587;
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
