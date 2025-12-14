#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7638158469735938551LL;
long long int var_2 = 8175623719220932841LL;
unsigned long long int var_4 = 1628626748551195051ULL;
signed char var_5 = (signed char)55;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 17721952663909918122ULL;
unsigned char var_9 = (unsigned char)248;
unsigned short var_10 = (unsigned short)45486;
short var_11 = (short)-6573;
unsigned long long int var_12 = 1379454463811831847ULL;
int zero = 0;
unsigned long long int var_13 = 9319128905486150882ULL;
int var_14 = -529172987;
long long int var_15 = 4674683738304575843LL;
long long int var_16 = 5151575286749874509LL;
long long int var_17 = -6880576598135464787LL;
unsigned short arr_1 [23] ;
unsigned short arr_4 [22] [22] ;
signed char arr_2 [23] ;
short arr_5 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (unsigned short)42158;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)23068;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (signed char)24 : (signed char)121;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (short)-17137;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
