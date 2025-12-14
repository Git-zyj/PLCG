#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_1 = (short)18312;
unsigned long long int var_2 = 17429675125309401929ULL;
_Bool var_3 = (_Bool)0;
unsigned long long int var_5 = 6813685890888923641ULL;
unsigned long long int var_7 = 15652170751225970778ULL;
unsigned long long int var_8 = 10141878772206302406ULL;
short var_10 = (short)-23767;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 1399117519U;
int zero = 0;
short var_13 = (short)7812;
long long int var_14 = -5088455361494067861LL;
int var_15 = 1334529258;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 244371768750341212ULL;
long long int var_18 = -7283416036106956286LL;
unsigned short var_19 = (unsigned short)49628;
short var_20 = (short)12446;
unsigned short var_21 = (unsigned short)13059;
long long int var_22 = 3165082269295873305LL;
int var_23 = -765560726;
int arr_2 [23] ;
_Bool arr_3 [23] [23] ;
unsigned short arr_8 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 1853457736 : 1795220754;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)13818 : (unsigned short)45500;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
