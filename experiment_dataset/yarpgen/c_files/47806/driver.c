#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_1 = -1840938008889474271LL;
short var_4 = (short)-30711;
unsigned long long int var_5 = 7161191049835511411ULL;
unsigned char var_11 = (unsigned char)74;
int zero = 0;
short var_14 = (short)-22355;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 13692157757311943280ULL;
_Bool var_17 = (_Bool)0;
int var_18 = 722676823;
unsigned long long int var_19 = 11036309027417744311ULL;
_Bool var_20 = (_Bool)0;
short arr_1 [14] ;
unsigned short arr_2 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (short)-21291;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)34095 : (unsigned short)46963;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
