#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)205;
signed char var_3 = (signed char)-83;
_Bool var_5 = (_Bool)0;
long long int var_6 = 8703013692512352107LL;
long long int var_7 = -1059166172911278410LL;
unsigned short var_8 = (unsigned short)44017;
int var_9 = -13167937;
short var_10 = (short)23232;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)8;
int var_14 = -1363890945;
long long int var_15 = -6918724661832262522LL;
_Bool var_16 = (_Bool)0;
int var_17 = 1682956162;
short var_18 = (short)14294;
unsigned int var_19 = 63262846U;
unsigned char var_20 = (unsigned char)123;
int var_21 = -277199568;
unsigned short var_22 = (unsigned short)25981;
_Bool arr_0 [19] ;
signed char arr_1 [19] ;
unsigned short arr_8 [11] ;
unsigned short arr_6 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (signed char)-21;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = (unsigned short)31591;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned short)55969 : (unsigned short)22186;
}

void checksum() {
    hash(&seed, var_12);
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
