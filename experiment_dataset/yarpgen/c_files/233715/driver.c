#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-31887;
int var_9 = 1399602257;
_Bool var_12 = (_Bool)0;
signed char var_14 = (signed char)0;
_Bool var_15 = (_Bool)0;
int zero = 0;
signed char var_17 = (signed char)3;
signed char var_18 = (signed char)84;
int var_19 = -2071278569;
unsigned char var_20 = (unsigned char)24;
unsigned char arr_0 [24] ;
_Bool arr_1 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (unsigned char)6;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
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
