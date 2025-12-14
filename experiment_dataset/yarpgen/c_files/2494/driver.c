#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1108668645U;
signed char var_1 = (signed char)5;
short var_2 = (short)-7668;
_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)76;
_Bool var_5 = (_Bool)1;
_Bool var_7 = (_Bool)1;
unsigned char var_10 = (unsigned char)244;
unsigned int var_11 = 3244131542U;
int var_12 = 1042714217;
unsigned long long int var_13 = 12711983710186070694ULL;
int zero = 0;
unsigned char var_15 = (unsigned char)166;
unsigned char var_16 = (unsigned char)8;
signed char var_17 = (signed char)56;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 572920882U;
int var_20 = 1712792819;
_Bool var_21 = (_Bool)1;
unsigned long long int arr_2 [13] ;
unsigned long long int arr_6 [13] [13] [13] ;
unsigned short arr_7 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 14649931928019727012ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 15232395797710089249ULL : 11354156988820366613ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = (unsigned short)6087;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
