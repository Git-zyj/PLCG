#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2823468050U;
short var_1 = (short)14036;
_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)1;
_Bool var_5 = (_Bool)1;
unsigned short var_6 = (unsigned short)33518;
unsigned char var_7 = (unsigned char)95;
unsigned short var_9 = (unsigned short)21863;
long long int var_10 = -1609763611313085874LL;
int var_11 = -1092937988;
long long int var_12 = 2666709963563307498LL;
unsigned char var_13 = (unsigned char)97;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)90;
signed char var_16 = (signed char)96;
unsigned int var_17 = 19388617U;
unsigned short var_18 = (unsigned short)18308;
short var_19 = (short)-1859;
int zero = 0;
unsigned long long int var_20 = 1205993046747055090ULL;
signed char var_21 = (signed char)-125;
short var_22 = (short)-24172;
unsigned char var_23 = (unsigned char)69;
unsigned int var_24 = 1671419548U;
short var_25 = (short)-805;
unsigned char var_26 = (unsigned char)41;
_Bool var_27 = (_Bool)1;
unsigned int arr_8 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = 2746037170U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
