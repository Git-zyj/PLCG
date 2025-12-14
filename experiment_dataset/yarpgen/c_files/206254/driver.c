#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned char var_2 = (unsigned char)191;
int var_3 = 1911444628;
signed char var_5 = (signed char)-50;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)1;
long long int var_9 = 4418988360575985356LL;
unsigned char var_10 = (unsigned char)232;
_Bool var_11 = (_Bool)1;
short var_12 = (short)1965;
signed char var_13 = (signed char)75;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 32860579U;
signed char var_16 = (signed char)36;
unsigned char var_17 = (unsigned char)209;
unsigned short var_18 = (unsigned short)47272;
unsigned char var_19 = (unsigned char)240;
signed char arr_2 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)77 : (signed char)-58;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
