#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)37231;
signed char var_4 = (signed char)-7;
unsigned long long int var_5 = 11944768663139689757ULL;
signed char var_6 = (signed char)16;
unsigned int var_9 = 4004784909U;
long long int var_12 = -7029065298356309561LL;
unsigned short var_17 = (unsigned short)36848;
short var_18 = (short)31079;
short var_19 = (short)13065;
int zero = 0;
signed char var_20 = (signed char)26;
unsigned short var_21 = (unsigned short)48253;
unsigned short var_22 = (unsigned short)63633;
unsigned char arr_1 [24] ;
signed char arr_3 [24] ;
_Bool arr_6 [24] ;
unsigned short arr_7 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (unsigned char)169;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (signed char)23;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)23000;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
