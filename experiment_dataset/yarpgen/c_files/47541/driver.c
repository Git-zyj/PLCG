#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_4 = -1812695012;
unsigned long long int var_5 = 17836786562557712255ULL;
unsigned short var_6 = (unsigned short)24644;
signed char var_13 = (signed char)-20;
_Bool var_14 = (_Bool)0;
unsigned long long int var_16 = 14860632909845311837ULL;
unsigned short var_17 = (unsigned short)8709;
int zero = 0;
int var_18 = 624965897;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)66;
long long int arr_0 [13] ;
short arr_1 [13] ;
_Bool arr_2 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = -7787757135438823159LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (short)11239;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
