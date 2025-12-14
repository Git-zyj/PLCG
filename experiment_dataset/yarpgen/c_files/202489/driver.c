#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-17;
long long int var_1 = -2781543064426923409LL;
unsigned char var_7 = (unsigned char)170;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 365379736U;
unsigned int var_15 = 286348870U;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 3138033281U;
unsigned short var_18 = (unsigned short)8082;
_Bool var_19 = (_Bool)1;
long long int var_20 = 3863532894934319307LL;
unsigned char arr_1 [13] ;
unsigned char arr_3 [13] ;
signed char arr_4 [13] [13] ;
unsigned char arr_5 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (unsigned char)144;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned char)31 : (unsigned char)64;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)-34;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned char)173 : (unsigned char)160;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
