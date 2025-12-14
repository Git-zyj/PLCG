#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-10290;
int var_2 = -85786255;
unsigned short var_3 = (unsigned short)1749;
_Bool var_4 = (_Bool)1;
unsigned long long int var_5 = 11793619973386792268ULL;
unsigned char var_10 = (unsigned char)249;
unsigned short var_12 = (unsigned short)40529;
long long int var_16 = -61478391258914617LL;
int zero = 0;
long long int var_20 = -6600495018178462799LL;
_Bool var_21 = (_Bool)1;
unsigned short var_22 = (unsigned short)42876;
unsigned long long int arr_0 [24] ;
_Bool arr_2 [24] ;
unsigned long long int arr_3 [24] [24] [24] ;
short arr_4 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 5632707936154015386ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 3633473441369505760ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (short)22291;
}

void checksum() {
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
