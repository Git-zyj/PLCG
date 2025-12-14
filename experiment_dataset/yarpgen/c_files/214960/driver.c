#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8693985594520022229LL;
signed char var_3 = (signed char)-39;
unsigned short var_10 = (unsigned short)16999;
_Bool var_11 = (_Bool)1;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)69;
int zero = 0;
unsigned char var_17 = (unsigned char)186;
unsigned short var_18 = (unsigned short)56638;
unsigned short var_19 = (unsigned short)7661;
unsigned long long int var_20 = 13279209444591364971ULL;
signed char var_21 = (signed char)117;
unsigned int var_22 = 2740996545U;
unsigned short var_23 = (unsigned short)12781;
short var_24 = (short)22523;
int arr_1 [18] ;
unsigned char arr_4 [18] [18] [18] ;
unsigned char arr_10 [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 1804241846;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned char)136;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (unsigned char)4;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
