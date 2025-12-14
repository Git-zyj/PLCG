#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1857918801U;
unsigned int var_1 = 271150874U;
signed char var_3 = (signed char)18;
unsigned char var_4 = (unsigned char)124;
unsigned char var_5 = (unsigned char)13;
signed char var_6 = (signed char)44;
signed char var_7 = (signed char)-30;
unsigned int var_9 = 776822645U;
unsigned long long int var_10 = 10353536865937764357ULL;
signed char var_11 = (signed char)2;
int zero = 0;
unsigned int var_12 = 1064878437U;
int var_13 = 41719733;
short var_14 = (short)14801;
signed char var_15 = (signed char)99;
unsigned short var_16 = (unsigned short)40452;
unsigned long long int var_17 = 11273315071506642664ULL;
unsigned char var_18 = (unsigned char)128;
signed char var_19 = (signed char)1;
_Bool var_20 = (_Bool)1;
_Bool arr_3 [13] ;
unsigned char arr_4 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)253;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
