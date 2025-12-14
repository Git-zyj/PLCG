#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)4110;
_Bool var_4 = (_Bool)1;
int var_7 = -1964426606;
unsigned short var_10 = (unsigned short)39766;
_Bool var_14 = (_Bool)1;
unsigned int var_18 = 1628183426U;
int var_19 = 1998731920;
int zero = 0;
unsigned int var_20 = 4198433531U;
short var_21 = (short)-5446;
int var_22 = 2069132974;
unsigned int var_23 = 311729869U;
long long int var_24 = 5337262854246390951LL;
short arr_16 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_16 [i_0] [i_1] = (short)14506;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
