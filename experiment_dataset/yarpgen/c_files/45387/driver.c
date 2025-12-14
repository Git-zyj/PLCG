#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)5;
unsigned int var_3 = 467506759U;
unsigned char var_4 = (unsigned char)134;
unsigned char var_5 = (unsigned char)70;
_Bool var_6 = (_Bool)0;
unsigned long long int var_10 = 7235208231471022961ULL;
signed char var_13 = (signed char)71;
unsigned short var_14 = (unsigned short)1549;
unsigned char var_15 = (unsigned char)147;
int zero = 0;
unsigned short var_16 = (unsigned short)27668;
unsigned short var_17 = (unsigned short)46814;
unsigned int var_18 = 3424956901U;
unsigned long long int var_19 = 10043402855742301392ULL;
unsigned char var_20 = (unsigned char)254;
unsigned short var_21 = (unsigned short)26105;
unsigned int arr_0 [16] ;
unsigned char arr_3 [16] [16] ;
unsigned short arr_4 [16] [16] ;
unsigned long long int arr_5 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 4074034219U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)185 : (unsigned char)158;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)37647;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? 10611806507640392087ULL : 4299223786202233674ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
