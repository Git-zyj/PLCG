#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-9697;
unsigned int var_1 = 3754527483U;
short var_3 = (short)-26790;
short var_4 = (short)3542;
unsigned char var_5 = (unsigned char)144;
unsigned long long int var_7 = 10732811664040828497ULL;
long long int var_9 = 227126655908620400LL;
signed char var_10 = (signed char)17;
int zero = 0;
long long int var_14 = 5454989336598774278LL;
unsigned long long int var_15 = 118587207271702835ULL;
short var_16 = (short)-16560;
unsigned int var_17 = 2008092347U;
unsigned long long int var_18 = 8846457641807266632ULL;
unsigned short var_19 = (unsigned short)27691;
unsigned int arr_0 [12] ;
unsigned short arr_3 [12] ;
unsigned short arr_8 [11] ;
short arr_9 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 283934879U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (unsigned short)24112;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = (unsigned short)60500;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-11330 : (short)-13159;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
