#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 469264873;
int var_2 = 1604247707;
signed char var_3 = (signed char)52;
signed char var_5 = (signed char)62;
_Bool var_7 = (_Bool)0;
long long int var_9 = 3283822607613967470LL;
unsigned int var_11 = 856571782U;
unsigned char var_12 = (unsigned char)16;
int zero = 0;
signed char var_13 = (signed char)84;
unsigned long long int var_14 = 12816506771864184217ULL;
unsigned long long int var_15 = 717792991772696280ULL;
signed char var_16 = (signed char)70;
int var_17 = -1255509770;
unsigned char var_18 = (unsigned char)203;
signed char arr_1 [21] ;
signed char arr_2 [21] ;
short arr_4 [21] [21] [21] ;
_Bool arr_5 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (signed char)-100;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (signed char)112;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (short)-19521;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
