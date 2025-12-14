#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -59514589;
signed char var_3 = (signed char)-11;
_Bool var_4 = (_Bool)0;
unsigned short var_7 = (unsigned short)29181;
unsigned short var_10 = (unsigned short)39540;
unsigned short var_11 = (unsigned short)2842;
short var_12 = (short)9726;
signed char var_15 = (signed char)55;
int zero = 0;
signed char var_18 = (signed char)-112;
int var_19 = -1653197910;
unsigned int var_20 = 2290552769U;
unsigned short var_21 = (unsigned short)10414;
unsigned char arr_0 [15] [15] ;
unsigned short arr_2 [15] ;
_Bool arr_3 [15] ;
_Bool arr_4 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)44;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (unsigned short)52027;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
