#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_1 = 1999069293U;
unsigned long long int var_2 = 15230047638331212834ULL;
int var_4 = 793740981;
short var_5 = (short)17032;
signed char var_6 = (signed char)-84;
unsigned char var_7 = (unsigned char)162;
unsigned long long int var_8 = 3384996327589069133ULL;
unsigned int var_9 = 2999242271U;
signed char var_10 = (signed char)81;
int var_11 = 1785008602;
unsigned int var_12 = 896819146U;
long long int var_13 = 1161448792788830041LL;
short var_14 = (short)5360;
int zero = 0;
unsigned int var_15 = 24705922U;
long long int var_16 = 7771672380901078453LL;
unsigned long long int var_17 = 3962675092408447420ULL;
signed char var_18 = (signed char)87;
int var_19 = 1932886412;
unsigned long long int var_20 = 13430570936483872655ULL;
signed char var_21 = (signed char)119;
_Bool var_22 = (_Bool)0;
signed char var_23 = (signed char)-98;
long long int var_24 = 2371521216038334856LL;
_Bool var_25 = (_Bool)0;
unsigned short var_26 = (unsigned short)11787;
signed char arr_0 [22] [22] ;
unsigned long long int arr_1 [22] ;
unsigned char arr_9 [22] [22] [22] [22] ;
_Bool arr_2 [22] ;
unsigned long long int arr_18 [22] ;
unsigned short arr_19 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-7;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 15876131105322543827ULL : 7321754439271234322ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (unsigned char)249;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? 57391867557045601ULL : 11543514181810094159ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? (unsigned short)2599 : (unsigned short)12379;
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_19 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
