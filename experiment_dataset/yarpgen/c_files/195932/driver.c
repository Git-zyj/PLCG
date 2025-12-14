#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)13428;
unsigned char var_1 = (unsigned char)95;
long long int var_3 = -8251445925084536084LL;
int var_5 = 1251270791;
short var_6 = (short)-18984;
unsigned char var_7 = (unsigned char)39;
unsigned short var_8 = (unsigned short)15362;
unsigned int var_9 = 3104046495U;
signed char var_10 = (signed char)-72;
unsigned short var_13 = (unsigned short)37668;
unsigned short var_14 = (unsigned short)61432;
int zero = 0;
short var_15 = (short)5323;
int var_16 = -627470056;
short var_17 = (short)22092;
long long int var_18 = 4452750951975686938LL;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)0;
int var_21 = -1624792851;
signed char var_22 = (signed char)-7;
signed char var_23 = (signed char)(-127 - 1);
signed char var_24 = (signed char)57;
unsigned long long int arr_0 [23] ;
unsigned short arr_1 [23] [23] ;
signed char arr_2 [14] ;
signed char arr_3 [14] ;
unsigned short arr_4 [14] [14] ;
unsigned short arr_7 [15] [15] ;
_Bool arr_9 [15] ;
unsigned short arr_10 [25] ;
_Bool arr_11 [25] [25] ;
unsigned char arr_6 [14] [14] ;
long long int arr_12 [25] [25] ;
unsigned long long int arr_13 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 9322325944255091672ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)33573;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (signed char)104;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (signed char)69 : (signed char)-115;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)7949;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)47188;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_9 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (unsigned short)32531 : (unsigned short)6847;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_11 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)74 : (unsigned char)105;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_12 [i_0] [i_1] = (i_0 % 2 == 0) ? -2245004456257150763LL : -6744566132463753829LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? 1546412309218250699ULL : 850776131623243667ULL;
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
