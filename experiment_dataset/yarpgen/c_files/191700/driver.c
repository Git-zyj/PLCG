#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)124;
int var_5 = 853320110;
unsigned char var_6 = (unsigned char)153;
int var_9 = 1708340214;
unsigned short var_12 = (unsigned short)60382;
long long int var_13 = 7363739372233311854LL;
int zero = 0;
unsigned char var_14 = (unsigned char)116;
unsigned long long int var_15 = 5582755715791051566ULL;
int var_16 = -1016310535;
unsigned short var_17 = (unsigned short)37378;
short var_18 = (short)-21709;
int arr_0 [11] ;
unsigned char arr_2 [11] ;
unsigned long long int arr_4 [11] [11] [11] ;
unsigned short arr_5 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = -1637151452;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (unsigned char)6;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 16168549425757092139ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned short)47572 : (unsigned short)10556;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
