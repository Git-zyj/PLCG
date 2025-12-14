#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)131;
short var_4 = (short)3398;
short var_5 = (short)12591;
_Bool var_6 = (_Bool)0;
unsigned char var_7 = (unsigned char)198;
long long int var_8 = 6445394730760428903LL;
signed char var_10 = (signed char)49;
long long int var_11 = 1974781590589428218LL;
int zero = 0;
long long int var_14 = 4867484624417598682LL;
signed char var_15 = (signed char)65;
signed char var_16 = (signed char)-108;
unsigned long long int var_17 = 6339706861697467352ULL;
short arr_0 [11] [11] ;
long long int arr_1 [11] ;
_Bool arr_2 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-29055;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = -2929164354467479277LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
