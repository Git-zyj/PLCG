#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)7;
unsigned short var_3 = (unsigned short)11708;
int var_5 = -1832656801;
unsigned int var_7 = 3614668616U;
long long int var_8 = -195542602164727929LL;
signed char var_10 = (signed char)73;
long long int var_13 = -6434970854105159323LL;
int zero = 0;
unsigned short var_15 = (unsigned short)64699;
signed char var_16 = (signed char)-6;
short var_17 = (short)9075;
unsigned char var_18 = (unsigned char)167;
long long int var_19 = -298420835338771912LL;
short var_20 = (short)28416;
_Bool var_21 = (_Bool)1;
short arr_0 [12] ;
long long int arr_20 [22] ;
short arr_21 [22] [22] ;
unsigned long long int arr_17 [12] ;
unsigned char arr_18 [12] ;
unsigned char arr_19 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (short)-9279;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_20 [i_0] = 2262755170616235816LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_21 [i_0] [i_1] = (short)-171;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? 8575970298408794274ULL : 13708466646196782844ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_18 [i_0] = (unsigned char)15;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_19 [i_0] = (unsigned char)238;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_19 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
