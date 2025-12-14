#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6980447355918724087ULL;
unsigned int var_3 = 1441318024U;
unsigned short var_4 = (unsigned short)21637;
signed char var_8 = (signed char)-97;
unsigned char var_9 = (unsigned char)170;
short var_10 = (short)-7837;
short var_11 = (short)-29348;
_Bool var_12 = (_Bool)1;
unsigned char var_14 = (unsigned char)231;
unsigned char var_15 = (unsigned char)129;
int zero = 0;
unsigned short var_16 = (unsigned short)52474;
unsigned short var_17 = (unsigned short)56445;
short var_18 = (short)16869;
signed char var_19 = (signed char)61;
signed char var_20 = (signed char)45;
unsigned int var_21 = 3944060833U;
unsigned long long int var_22 = 9964195971755511570ULL;
unsigned short var_23 = (unsigned short)38899;
short arr_0 [16] ;
unsigned int arr_1 [16] ;
long long int arr_3 [14] ;
unsigned char arr_5 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (short)4776;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 2651191283U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = 5992161691775453497LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (unsigned char)52;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
