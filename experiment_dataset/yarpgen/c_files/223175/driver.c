#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3754422767040721118LL;
unsigned long long int var_1 = 10158845962658025350ULL;
unsigned int var_3 = 3189651851U;
int var_5 = -1959442956;
unsigned short var_6 = (unsigned short)36514;
int var_7 = 2053426093;
short var_9 = (short)-25132;
short var_10 = (short)8808;
int zero = 0;
unsigned long long int var_11 = 7807575236668843469ULL;
unsigned int var_12 = 505211753U;
unsigned int var_13 = 587160792U;
signed char var_14 = (signed char)22;
short var_15 = (short)6146;
long long int var_16 = 8161600115722482636LL;
long long int var_17 = 2603537970136078108LL;
long long int var_18 = 6768116785482248279LL;
unsigned int var_19 = 1905351893U;
long long int arr_0 [16] [16] ;
short arr_1 [16] ;
unsigned short arr_13 [22] ;
_Bool arr_14 [22] ;
short arr_6 [13] ;
unsigned char arr_7 [13] ;
short arr_12 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = -4407039920262866867LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (short)-19239;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_13 [i_0] = (unsigned short)36676;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_14 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = (short)1428;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = (unsigned char)131;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_12 [i_0] = (short)-18389;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
