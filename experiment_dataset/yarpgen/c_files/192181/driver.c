#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1516664205U;
unsigned short var_5 = (unsigned short)5134;
_Bool var_7 = (_Bool)0;
int var_9 = -2035037443;
int var_10 = -723386657;
int var_11 = -692674274;
int zero = 0;
int var_13 = 1705363593;
short var_14 = (short)-11477;
long long int var_15 = 8758131934388599851LL;
unsigned short var_16 = (unsigned short)49468;
short var_17 = (short)26413;
int var_18 = 953066746;
signed char arr_1 [22] ;
unsigned char arr_2 [22] [22] ;
short arr_3 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (signed char)-106;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)197;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-30461;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
