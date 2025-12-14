#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-30755;
unsigned char var_3 = (unsigned char)58;
unsigned short var_5 = (unsigned short)13159;
signed char var_6 = (signed char)19;
unsigned char var_7 = (unsigned char)192;
int var_10 = -1879459492;
int zero = 0;
short var_11 = (short)30618;
short var_12 = (short)17208;
unsigned char var_13 = (unsigned char)165;
unsigned short var_14 = (unsigned short)11631;
unsigned int var_15 = 2562913742U;
signed char var_16 = (signed char)44;
_Bool var_17 = (_Bool)0;
short var_18 = (short)5411;
int var_19 = 1590526198;
unsigned char var_20 = (unsigned char)250;
_Bool var_21 = (_Bool)0;
unsigned int var_22 = 1286165524U;
unsigned short arr_5 [15] [15] [15] ;
signed char arr_8 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)43463 : (unsigned short)41041;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = (signed char)37;
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
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
