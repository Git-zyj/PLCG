#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-9514;
signed char var_5 = (signed char)34;
unsigned short var_6 = (unsigned short)54536;
unsigned short var_7 = (unsigned short)32943;
unsigned char var_8 = (unsigned char)77;
_Bool var_10 = (_Bool)1;
short var_15 = (short)8578;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)-110;
int var_18 = 217817838;
signed char var_19 = (signed char)-49;
int zero = 0;
unsigned short var_20 = (unsigned short)7968;
short var_21 = (short)7178;
short var_22 = (short)21382;
unsigned char var_23 = (unsigned char)135;
short var_24 = (short)30991;
unsigned int var_25 = 3885381075U;
short var_26 = (short)14775;
unsigned short arr_0 [15] [15] ;
_Bool arr_1 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)45250;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
}

void checksum() {
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
