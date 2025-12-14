#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_4 = 3844852657487490233ULL;
short var_5 = (short)-300;
signed char var_7 = (signed char)-51;
unsigned long long int var_8 = 12268889957017410298ULL;
unsigned short var_11 = (unsigned short)16682;
unsigned int var_13 = 3837720538U;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned char var_15 = (unsigned char)12;
unsigned long long int var_16 = 3960681632466857567ULL;
unsigned long long int var_17 = 7474175499890833544ULL;
long long int var_18 = 5988102634644491634LL;
unsigned int var_19 = 2492458211U;
unsigned short var_20 = (unsigned short)6441;
int var_21 = 155416754;
int var_22 = -693824730;
int var_23 = 1842929705;
short var_24 = (short)7799;
int var_25 = 1641002312;
unsigned char var_26 = (unsigned char)190;
unsigned short arr_0 [22] ;
unsigned long long int arr_1 [22] ;
int arr_4 [24] ;
unsigned long long int arr_6 [24] [24] ;
unsigned long long int arr_8 [24] [24] ;
int arr_9 [20] ;
unsigned int arr_10 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (unsigned short)21882;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 10268126250958785435ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = 295428856;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_6 [i_0] [i_1] = 4911004369648474554ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_8 [i_0] [i_1] = 9833958314050735320ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_9 [i_0] = -1628795635;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_10 [i_0] = 1283333222U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
