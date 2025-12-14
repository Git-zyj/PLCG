#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)111;
unsigned int var_3 = 2333911147U;
signed char var_11 = (signed char)12;
short var_14 = (short)-22821;
int zero = 0;
unsigned long long int var_16 = 3020604090273610692ULL;
signed char var_17 = (signed char)-88;
long long int var_18 = 523450086907220414LL;
int var_19 = 450851027;
unsigned char var_20 = (unsigned char)228;
long long int var_21 = 7436530527274327936LL;
long long int var_22 = -8634101166755954717LL;
short var_23 = (short)-18416;
unsigned short arr_1 [18] ;
unsigned char arr_2 [18] ;
unsigned short arr_5 [15] ;
_Bool arr_3 [18] ;
short arr_8 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (unsigned short)61465;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (unsigned char)160;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (unsigned short)14173;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = (short)18669;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
