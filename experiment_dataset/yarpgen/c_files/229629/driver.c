#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -2338944405734665609LL;
int var_11 = 1215782318;
_Bool var_13 = (_Bool)0;
int var_15 = -1968128978;
int var_16 = 1405387750;
int zero = 0;
unsigned char var_17 = (unsigned char)166;
unsigned int var_18 = 2216751708U;
unsigned long long int var_19 = 13148345721491493424ULL;
unsigned int var_20 = 1678975607U;
unsigned short var_21 = (unsigned short)20428;
unsigned long long int var_22 = 8018199630633935345ULL;
unsigned long long int var_23 = 14365447432910457991ULL;
signed char var_24 = (signed char)-76;
int var_25 = -795797256;
unsigned char var_26 = (unsigned char)91;
unsigned short var_27 = (unsigned short)48273;
unsigned int var_28 = 1751010693U;
_Bool arr_0 [24] ;
int arr_1 [24] ;
unsigned short arr_2 [24] ;
long long int arr_3 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = -1711760058;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned short)19099 : (unsigned short)43386;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? -7030759002746348379LL : -4617356507067523133LL;
}

void checksum() {
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
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
