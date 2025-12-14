#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14008024585121800939ULL;
unsigned long long int var_4 = 17974980579827795732ULL;
int var_5 = -2066757222;
_Bool var_6 = (_Bool)0;
signed char var_8 = (signed char)-70;
int var_9 = -1907498270;
_Bool var_10 = (_Bool)1;
unsigned short var_12 = (unsigned short)63639;
int zero = 0;
int var_14 = 1075139905;
short var_15 = (short)14454;
unsigned char var_16 = (unsigned char)85;
int var_17 = 553982991;
_Bool var_18 = (_Bool)1;
unsigned char arr_0 [16] ;
signed char arr_1 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (unsigned char)209;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)113;
}

void checksum() {
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
