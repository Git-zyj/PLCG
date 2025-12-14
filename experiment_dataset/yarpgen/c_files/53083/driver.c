#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)251;
unsigned char var_5 = (unsigned char)155;
unsigned long long int var_6 = 5203777340037721687ULL;
int var_7 = 1579803347;
unsigned char var_11 = (unsigned char)153;
unsigned long long int var_12 = 14962672123591445447ULL;
short var_13 = (short)26276;
unsigned short var_15 = (unsigned short)38267;
signed char var_17 = (signed char)-118;
int zero = 0;
unsigned int var_20 = 4117712078U;
unsigned short var_21 = (unsigned short)13602;
int var_22 = 1258050764;
unsigned char var_23 = (unsigned char)178;
_Bool arr_1 [16] ;
short arr_2 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-32122;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
