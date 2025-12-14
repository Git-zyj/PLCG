#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 269616043830533941ULL;
unsigned char var_3 = (unsigned char)174;
unsigned char var_4 = (unsigned char)206;
unsigned char var_5 = (unsigned char)141;
_Bool var_7 = (_Bool)1;
unsigned int var_8 = 213585122U;
int zero = 0;
unsigned int var_11 = 467011310U;
signed char var_12 = (signed char)18;
unsigned short var_13 = (unsigned short)3108;
unsigned short var_14 = (unsigned short)5033;
signed char var_15 = (signed char)-102;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)129;
short var_18 = (short)17524;
int arr_0 [24] ;
unsigned short arr_9 [24] [24] [24] ;
long long int arr_3 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = -908676806;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)8634 : (unsigned short)12897;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = 2285053541450728979LL;
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
