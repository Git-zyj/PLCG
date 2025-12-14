#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1670625665;
unsigned short var_2 = (unsigned short)20018;
long long int var_3 = 7713428852687266873LL;
long long int var_4 = -7376689968599457813LL;
signed char var_5 = (signed char)41;
int var_6 = 916933252;
int var_7 = 2066293608;
short var_8 = (short)1235;
unsigned short var_9 = (unsigned short)29441;
int zero = 0;
unsigned char var_10 = (unsigned char)26;
unsigned long long int var_11 = 8759563074143149486ULL;
unsigned short var_12 = (unsigned short)1939;
unsigned short var_13 = (unsigned short)52571;
int var_14 = 1382950055;
long long int var_15 = 8851441408115758492LL;
int var_16 = 429909494;
unsigned int var_17 = 1433671017U;
int var_18 = 241016244;
unsigned long long int var_19 = 18153568736342275237ULL;
unsigned char var_20 = (unsigned char)168;
long long int var_21 = -8393298336216156730LL;
unsigned long long int arr_0 [20] ;
long long int arr_1 [20] ;
int arr_3 [24] ;
long long int arr_9 [10] ;
_Bool arr_11 [10] ;
unsigned long long int arr_2 [20] [20] ;
signed char arr_15 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = 238717529122243715ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = -7354591142422140354LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = -1855700714;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 1866338453967051823LL : -6815268826938133361LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_11 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = 13623578951086765267ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_15 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-62 : (signed char)97;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
