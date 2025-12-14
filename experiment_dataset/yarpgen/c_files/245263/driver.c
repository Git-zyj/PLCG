#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
int var_7 = 621882058;
int var_8 = -847145071;
unsigned char var_10 = (unsigned char)200;
long long int var_12 = 4866934791888917851LL;
int zero = 0;
signed char var_13 = (signed char)-123;
unsigned char var_14 = (unsigned char)18;
unsigned short var_15 = (unsigned short)536;
unsigned long long int var_16 = 10872490950685170627ULL;
unsigned int var_17 = 2359628339U;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 2690734807830218086ULL;
short arr_1 [18] ;
signed char arr_3 [18] ;
long long int arr_4 [24] [24] ;
unsigned short arr_6 [24] ;
long long int arr_7 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (short)-22112;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (signed char)33;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = -5874708629236565620LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (unsigned short)30856;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = 2720997960963678210LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
