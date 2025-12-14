#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)56;
unsigned int var_8 = 2278165093U;
int var_9 = 1126527317;
unsigned long long int var_10 = 16663928351973503945ULL;
int var_13 = -731549820;
int zero = 0;
short var_14 = (short)4877;
long long int var_15 = -7199221803300706242LL;
unsigned char var_16 = (unsigned char)103;
unsigned long long int var_17 = 8112682178355153882ULL;
unsigned long long int var_18 = 7060447997540815064ULL;
unsigned char var_19 = (unsigned char)137;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)120;
unsigned long long int var_22 = 4518258846091533474ULL;
unsigned char arr_1 [24] [24] ;
unsigned int arr_4 [25] ;
unsigned char arr_6 [25] ;
long long int arr_9 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)148;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = 1312927582U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (unsigned char)87;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_9 [i_0] [i_1] = 5222976488336224635LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
