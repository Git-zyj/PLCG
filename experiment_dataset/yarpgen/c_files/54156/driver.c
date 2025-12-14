#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -2109079176;
unsigned long long int var_5 = 10282378003087433468ULL;
int var_7 = -543215866;
signed char var_9 = (signed char)112;
unsigned short var_10 = (unsigned short)48284;
unsigned char var_11 = (unsigned char)212;
int zero = 0;
unsigned short var_14 = (unsigned short)52948;
int var_15 = -1376846624;
unsigned long long int var_16 = 1602397177252468650ULL;
unsigned char var_17 = (unsigned char)192;
short var_18 = (short)25292;
_Bool var_19 = (_Bool)1;
unsigned short arr_0 [18] ;
unsigned long long int arr_2 [18] ;
signed char arr_6 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (unsigned short)5276;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 6749192368226524809ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (signed char)-28;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
