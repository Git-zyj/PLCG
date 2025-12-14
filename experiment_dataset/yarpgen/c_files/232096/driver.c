#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-24673;
unsigned char var_5 = (unsigned char)81;
unsigned int var_7 = 1754061666U;
signed char var_8 = (signed char)112;
unsigned char var_9 = (unsigned char)117;
unsigned int var_10 = 1342972751U;
signed char var_11 = (signed char)117;
signed char var_13 = (signed char)-36;
int var_16 = -1238537887;
int zero = 0;
unsigned long long int var_17 = 7602525502726178435ULL;
signed char var_18 = (signed char)-24;
unsigned long long int arr_0 [24] ;
unsigned int arr_1 [24] ;
unsigned int arr_3 [24] ;
long long int arr_4 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 7559788892600144255ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 682736210U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 2785551405U : 1136021743U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? -6346507692674290021LL : 1846049579546010184LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
