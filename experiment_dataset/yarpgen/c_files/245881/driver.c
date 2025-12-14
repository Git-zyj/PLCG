#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -981213799;
short var_3 = (short)-11789;
_Bool var_4 = (_Bool)1;
unsigned short var_5 = (unsigned short)52297;
unsigned char var_6 = (unsigned char)234;
int var_10 = -854391096;
unsigned char var_11 = (unsigned char)76;
unsigned long long int var_13 = 16641359009984462474ULL;
int zero = 0;
_Bool var_14 = (_Bool)1;
int var_15 = -542239364;
_Bool var_16 = (_Bool)0;
short var_17 = (short)-11837;
signed char var_18 = (signed char)-47;
unsigned long long int var_19 = 7368868933330829965ULL;
signed char var_20 = (signed char)-19;
int var_21 = 1035533741;
signed char arr_0 [17] [17] ;
signed char arr_1 [17] ;
short arr_2 [17] ;
long long int arr_4 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)78 : (signed char)3;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (signed char)-122;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (short)-1980;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = -1703823704487213480LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
