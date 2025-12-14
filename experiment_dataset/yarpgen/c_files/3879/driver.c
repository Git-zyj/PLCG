#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7932629215554870724LL;
_Bool var_1 = (_Bool)0;
_Bool var_5 = (_Bool)1;
unsigned char var_6 = (unsigned char)222;
long long int var_9 = -3931772306020329394LL;
unsigned short var_10 = (unsigned short)8609;
unsigned short var_12 = (unsigned short)40500;
unsigned char var_13 = (unsigned char)192;
int var_14 = -224478153;
int zero = 0;
_Bool var_17 = (_Bool)1;
long long int var_18 = 5039205024460524438LL;
unsigned long long int var_19 = 11395370750512815750ULL;
unsigned char var_20 = (unsigned char)69;
unsigned short var_21 = (unsigned short)2131;
unsigned long long int var_22 = 15262406098213874794ULL;
_Bool arr_2 [15] [15] ;
_Bool arr_3 [15] [15] [15] ;
unsigned short arr_6 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)47826;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
