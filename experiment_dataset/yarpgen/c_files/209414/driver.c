#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)48730;
unsigned int var_1 = 1419655899U;
unsigned short var_5 = (unsigned short)29349;
unsigned int var_6 = 3017878736U;
unsigned int var_8 = 2262968953U;
unsigned char var_10 = (unsigned char)134;
unsigned char var_12 = (unsigned char)114;
unsigned short var_13 = (unsigned short)24425;
signed char var_15 = (signed char)21;
unsigned int var_16 = 2058045900U;
unsigned long long int var_17 = 14339727087780273114ULL;
unsigned long long int var_18 = 408602901936946357ULL;
unsigned short var_19 = (unsigned short)10895;
int zero = 0;
unsigned short var_20 = (unsigned short)11104;
unsigned short var_21 = (unsigned short)6384;
signed char var_22 = (signed char)37;
unsigned long long int var_23 = 15067076683468116753ULL;
unsigned int var_24 = 2032576372U;
unsigned char arr_6 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (unsigned char)10;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
