#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12589015895930587469ULL;
unsigned short var_5 = (unsigned short)37504;
unsigned short var_8 = (unsigned short)42910;
unsigned int var_14 = 1761044627U;
unsigned int var_16 = 3332280291U;
unsigned int var_17 = 1233231354U;
signed char var_18 = (signed char)8;
int zero = 0;
unsigned int var_19 = 1839115075U;
unsigned char var_20 = (unsigned char)148;
unsigned char var_21 = (unsigned char)2;
signed char var_22 = (signed char)88;
long long int var_23 = -3506255261096775108LL;
signed char var_24 = (signed char)16;
unsigned char var_25 = (unsigned char)55;
signed char var_26 = (signed char)27;
short arr_0 [22] [22] ;
unsigned short arr_3 [22] ;
long long int arr_6 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-15026;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (unsigned short)51885;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = -776547424631908502LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
