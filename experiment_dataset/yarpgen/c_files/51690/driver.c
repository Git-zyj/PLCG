#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 562056073U;
unsigned long long int var_2 = 11565852300241117936ULL;
int var_4 = -795469301;
unsigned short var_5 = (unsigned short)40928;
int var_6 = -1277259473;
short var_8 = (short)27120;
unsigned char var_9 = (unsigned char)21;
unsigned short var_11 = (unsigned short)52206;
short var_12 = (short)6369;
unsigned short var_14 = (unsigned short)6189;
unsigned long long int var_15 = 11322420405648670975ULL;
int zero = 0;
int var_18 = 1919018212;
unsigned short var_19 = (unsigned short)55792;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 10467215771516241229ULL;
int var_22 = -1473801196;
unsigned long long int var_23 = 6250599918456859290ULL;
unsigned char var_24 = (unsigned char)161;
short var_25 = (short)-10170;
unsigned int arr_1 [24] ;
unsigned int arr_9 [24] [24] ;
long long int arr_10 [24] [24] [24] ;
short arr_5 [24] [24] [24] ;
long long int arr_12 [24] [24] ;
long long int arr_13 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 4080668017U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_9 [i_0] [i_1] = 1267714173U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = -1258748514037963755LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (short)-27800;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_12 [i_0] [i_1] = 345025282630303629LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_13 [i_0] = -930998450545108868LL;
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
