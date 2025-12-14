#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1281300403;
long long int var_1 = -2227918827013705768LL;
short var_3 = (short)-24409;
unsigned char var_4 = (unsigned char)29;
signed char var_5 = (signed char)106;
int var_7 = -1616361972;
_Bool var_9 = (_Bool)1;
unsigned char var_10 = (unsigned char)46;
long long int var_16 = 6968303930810666261LL;
signed char var_18 = (signed char)79;
unsigned long long int var_19 = 188451272147967608ULL;
int zero = 0;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)-9;
signed char var_22 = (signed char)52;
unsigned int var_23 = 3440437734U;
short var_24 = (short)-17047;
unsigned long long int var_25 = 12660249370765121621ULL;
short var_26 = (short)-12201;
_Bool var_27 = (_Bool)0;
unsigned long long int var_28 = 3275379976394374914ULL;
unsigned long long int arr_0 [16] ;
short arr_1 [16] ;
unsigned int arr_2 [19] [19] ;
int arr_3 [19] ;
long long int arr_4 [19] [19] ;
unsigned long long int arr_8 [19] ;
signed char arr_9 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 11986715700918209651ULL : 6882975648228062843ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (short)21964;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = 3822961571U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = -72495359;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = 6481099754865664315LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = 14562891514214393611ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_9 [i_0] = (signed char)-97;
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
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
