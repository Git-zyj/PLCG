#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)1497;
short var_4 = (short)-12854;
short var_5 = (short)8177;
unsigned short var_8 = (unsigned short)13662;
unsigned short var_10 = (unsigned short)13160;
_Bool var_12 = (_Bool)1;
short var_13 = (short)-7916;
short var_16 = (short)-2267;
unsigned long long int var_17 = 8449573236450190641ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)31745;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 3069859198U;
short var_23 = (short)-27688;
int var_24 = -1818816233;
unsigned short var_25 = (unsigned short)6967;
signed char var_26 = (signed char)-81;
int var_27 = -1222416408;
unsigned long long int arr_0 [12] [12] ;
short arr_1 [12] [12] ;
unsigned short arr_3 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = 8532877031654343482ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = (short)31773;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (unsigned short)23363;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
