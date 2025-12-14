#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11879117657719854729ULL;
unsigned char var_6 = (unsigned char)97;
_Bool var_7 = (_Bool)0;
signed char var_13 = (signed char)55;
signed char var_15 = (signed char)82;
int zero = 0;
unsigned int var_17 = 2951735042U;
short var_18 = (short)29692;
_Bool var_19 = (_Bool)0;
int var_20 = 941571156;
unsigned long long int var_21 = 14507344308866776277ULL;
unsigned short arr_2 [12] [12] [12] ;
unsigned long long int arr_6 [12] ;
signed char arr_7 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (unsigned short)58249;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = 18128823915768699763ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (signed char)97 : (signed char)-112;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
