#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_1 = (_Bool)0;
unsigned short var_3 = (unsigned short)11833;
long long int var_4 = 6406797341084429126LL;
unsigned char var_6 = (unsigned char)251;
unsigned char var_8 = (unsigned char)106;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)5106;
unsigned int var_11 = 2401182077U;
int var_12 = -2117784087;
long long int var_13 = -748760893508398485LL;
long long int var_14 = 2347142983392735200LL;
long long int var_17 = -1957301900575341689LL;
int zero = 0;
signed char var_18 = (signed char)120;
_Bool var_19 = (_Bool)0;
int var_20 = -1260021177;
short var_21 = (short)-32081;
unsigned long long int var_22 = 8713591665875420817ULL;
long long int var_23 = -4964549119373643551LL;
signed char var_24 = (signed char)-70;
unsigned char var_25 = (unsigned char)120;
unsigned char var_26 = (unsigned char)194;
signed char var_27 = (signed char)-61;
_Bool var_28 = (_Bool)1;
int var_29 = -1564254885;
unsigned int var_30 = 3029412098U;
unsigned short var_31 = (unsigned short)44701;
signed char var_32 = (signed char)62;
unsigned long long int var_33 = 13334893658316373113ULL;
unsigned int arr_2 [15] ;
signed char arr_3 [15] ;
_Bool arr_14 [15] [15] ;
unsigned char arr_19 [15] [15] [15] [15] [15] ;
long long int arr_23 [15] ;
_Bool arr_24 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 2169975150U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (signed char)-22;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_14 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? (unsigned char)105 : (unsigned char)17;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_23 [i_0] = 4922693892998130394LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_24 [i_0] = (_Bool)1;
}

void checksum() {
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
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        hash(&seed, arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_24 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
