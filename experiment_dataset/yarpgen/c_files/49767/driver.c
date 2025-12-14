#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-88;
unsigned short var_1 = (unsigned short)33110;
short var_2 = (short)-23455;
long long int var_4 = 7373980143702501232LL;
_Bool var_5 = (_Bool)1;
unsigned short var_6 = (unsigned short)35265;
unsigned char var_8 = (unsigned char)174;
int zero = 0;
unsigned short var_10 = (unsigned short)55546;
unsigned char var_11 = (unsigned char)160;
unsigned long long int var_12 = 15663163635169643272ULL;
int var_13 = -214698401;
short arr_1 [19] ;
unsigned short arr_3 [19] ;
_Bool arr_4 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (short)-9322;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (unsigned short)51395;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
