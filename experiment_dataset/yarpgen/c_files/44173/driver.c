#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)212;
long long int var_3 = -170591256713856698LL;
unsigned long long int var_4 = 15078713396160623148ULL;
signed char var_5 = (signed char)10;
unsigned char var_12 = (unsigned char)75;
int zero = 0;
unsigned short var_14 = (unsigned short)4281;
int var_15 = 1349260220;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)185;
short arr_0 [12] ;
unsigned int arr_2 [12] [12] [12] ;
short arr_3 [12] ;
int arr_4 [12] ;
signed char arr_5 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (short)7670;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 277875175U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (short)31384;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = 326203697;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)-78;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
