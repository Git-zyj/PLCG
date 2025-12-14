#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1299210722;
short var_2 = (short)-6725;
unsigned int var_5 = 52395154U;
_Bool var_6 = (_Bool)0;
int var_9 = -632603562;
unsigned int var_10 = 1698913925U;
unsigned short var_11 = (unsigned short)19382;
int zero = 0;
long long int var_12 = 149583955866487215LL;
short var_13 = (short)-28775;
unsigned int var_14 = 3286556683U;
unsigned int var_15 = 2575304717U;
unsigned short var_16 = (unsigned short)45935;
unsigned short var_17 = (unsigned short)63501;
int var_18 = 1725561124;
short arr_0 [16] ;
unsigned short arr_1 [16] ;
short arr_2 [16] ;
short arr_3 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (short)-5864;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned short)10270 : (unsigned short)26948;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (short)-19336;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)-21267 : (short)18049;
}

void checksum() {
    hash(&seed, var_12);
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
