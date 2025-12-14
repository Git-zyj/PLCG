#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 8866471767242034338ULL;
unsigned long long int var_7 = 12483784712021713661ULL;
int var_8 = -1818897387;
int var_9 = 1053466725;
signed char var_11 = (signed char)-54;
_Bool var_12 = (_Bool)1;
long long int var_13 = 7340875832102202968LL;
unsigned int var_15 = 2442815403U;
unsigned int var_16 = 4009596821U;
int zero = 0;
unsigned char var_17 = (unsigned char)59;
unsigned char var_18 = (unsigned char)243;
unsigned short var_19 = (unsigned short)30204;
signed char var_20 = (signed char)-75;
_Bool var_21 = (_Bool)1;
short var_22 = (short)-30910;
unsigned char var_23 = (unsigned char)122;
long long int var_24 = -4786888081040892167LL;
_Bool arr_2 [24] [24] ;
unsigned short arr_4 [24] [24] [24] [24] ;
_Bool arr_5 [24] [24] [24] [24] ;
unsigned short arr_8 [24] [24] ;
_Bool arr_12 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_4 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned short)37986 : (unsigned short)45470;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned short)36851;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_12 [i_0] = (_Bool)1;
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
