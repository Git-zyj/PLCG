#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)3073;
unsigned char var_6 = (unsigned char)47;
int var_8 = 1865142292;
signed char var_12 = (signed char)23;
short var_15 = (short)15287;
long long int var_16 = -1739558322736608336LL;
unsigned int var_17 = 2618781838U;
int zero = 0;
long long int var_18 = -3420260019432012690LL;
unsigned int var_19 = 4189964387U;
unsigned long long int var_20 = 14789733716505660082ULL;
unsigned int var_21 = 3555159926U;
unsigned long long int var_22 = 2880099983398188224ULL;
int var_23 = -804365008;
unsigned long long int var_24 = 8290889085963679931ULL;
short arr_0 [13] ;
int arr_5 [21] [21] ;
int arr_7 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (short)2777 : (short)-14388;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = 1047156498;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = -1096942035;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
