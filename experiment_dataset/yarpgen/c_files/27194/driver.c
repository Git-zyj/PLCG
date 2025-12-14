#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_1 = 1849052545U;
unsigned char var_2 = (unsigned char)168;
_Bool var_3 = (_Bool)0;
int var_4 = 41197218;
_Bool var_5 = (_Bool)0;
short var_6 = (short)-30192;
int var_7 = -143261506;
unsigned long long int var_8 = 5071519589984295584ULL;
unsigned long long int var_9 = 843330461975493965ULL;
int zero = 0;
short var_10 = (short)-17684;
unsigned short var_11 = (unsigned short)16323;
unsigned int var_12 = 4007314017U;
unsigned int var_13 = 1989760428U;
unsigned long long int var_14 = 17920993995006737246ULL;
unsigned char arr_0 [20] [20] ;
short arr_1 [20] ;
unsigned short arr_2 [20] ;
short arr_3 [20] ;
_Bool arr_6 [17] ;
long long int arr_8 [17] [17] ;
unsigned long long int arr_9 [17] ;
unsigned short arr_10 [17] ;
unsigned short arr_11 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)76;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (short)32113;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (unsigned short)4948;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (short)-31200;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? 3378579080101901140LL : 9032099471379228055LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 6498406130440948974ULL : 6760741076179204307ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (unsigned short)11788 : (unsigned short)6047;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (unsigned short)26899 : (unsigned short)6230;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
