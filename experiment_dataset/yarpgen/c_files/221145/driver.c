#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)41802;
int var_6 = -1374380298;
unsigned short var_9 = (unsigned short)2005;
long long int var_16 = 4319524742956231173LL;
unsigned long long int var_18 = 17011978551615410023ULL;
int zero = 0;
signed char var_19 = (signed char)71;
unsigned char var_20 = (unsigned char)224;
_Bool var_21 = (_Bool)0;
_Bool var_22 = (_Bool)0;
int arr_0 [24] ;
unsigned short arr_2 [24] ;
unsigned short arr_3 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 31190035;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (unsigned short)53858;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)42976 : (unsigned short)48217;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
