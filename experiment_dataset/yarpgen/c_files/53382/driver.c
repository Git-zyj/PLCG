#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned char var_3 = (unsigned char)241;
int var_6 = 1085489532;
int var_7 = -683550094;
unsigned long long int var_8 = 3608308243626769994ULL;
short var_9 = (short)25838;
int var_13 = -1733860950;
_Bool var_16 = (_Bool)1;
unsigned short var_18 = (unsigned short)62846;
int zero = 0;
unsigned short var_19 = (unsigned short)17188;
unsigned long long int var_20 = 18002088564646174160ULL;
unsigned char var_21 = (unsigned char)193;
long long int var_22 = 4841142645509193613LL;
unsigned long long int var_23 = 6940200827852610204ULL;
unsigned short arr_2 [11] [11] ;
unsigned char arr_5 [11] ;
_Bool arr_7 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)23978;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (unsigned char)157;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_7 [i_0] [i_1] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
