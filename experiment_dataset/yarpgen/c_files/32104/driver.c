#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1339216667;
long long int var_1 = -8057168409993432651LL;
unsigned char var_2 = (unsigned char)35;
unsigned long long int var_4 = 15353519914299594935ULL;
short var_5 = (short)5378;
_Bool var_6 = (_Bool)1;
short var_10 = (short)3511;
int zero = 0;
unsigned short var_11 = (unsigned short)62008;
unsigned short var_12 = (unsigned short)18453;
unsigned long long int var_13 = 3888727269655068233ULL;
unsigned short var_14 = (unsigned short)3176;
int var_15 = -2135954718;
unsigned short var_16 = (unsigned short)38075;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 15506503355957302763ULL;
long long int arr_0 [21] ;
long long int arr_2 [21] ;
unsigned short arr_4 [17] ;
unsigned long long int arr_5 [17] [17] ;
unsigned char arr_6 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 5632300811089607646LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = -8334221729090889369LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (unsigned short)1270;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = 6604154481231300681ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)30;
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
