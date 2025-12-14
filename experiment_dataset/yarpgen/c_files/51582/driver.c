#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)29967;
unsigned long long int var_4 = 4087929896348646476ULL;
unsigned int var_5 = 2276466808U;
unsigned char var_9 = (unsigned char)84;
_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)99;
unsigned short var_12 = (unsigned short)37714;
signed char var_14 = (signed char)-102;
unsigned short var_16 = (unsigned short)59812;
long long int var_18 = -5553832001096973415LL;
int zero = 0;
signed char var_19 = (signed char)-54;
unsigned char var_20 = (unsigned char)39;
signed char var_21 = (signed char)-77;
unsigned char var_22 = (unsigned char)4;
unsigned char var_23 = (unsigned char)181;
unsigned short var_24 = (unsigned short)42054;
unsigned char var_25 = (unsigned char)12;
unsigned short arr_0 [19] ;
unsigned long long int arr_1 [19] ;
short arr_2 [19] ;
unsigned char arr_3 [19] ;
_Bool arr_7 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (unsigned short)9290;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 7700516631209701651ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (short)-13189;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (unsigned char)198;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
