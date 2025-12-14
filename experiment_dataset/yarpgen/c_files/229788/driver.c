#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1954662447;
_Bool var_1 = (_Bool)0;
unsigned long long int var_2 = 14449520539591942705ULL;
signed char var_6 = (signed char)-17;
int var_7 = -1817264771;
short var_10 = (short)24369;
int zero = 0;
unsigned long long int var_11 = 10641243976765077363ULL;
unsigned short var_12 = (unsigned short)40425;
unsigned short var_13 = (unsigned short)55306;
unsigned int var_14 = 2433230491U;
unsigned long long int var_15 = 2227789031109891697ULL;
unsigned char var_16 = (unsigned char)109;
_Bool arr_0 [24] ;
unsigned char arr_1 [24] ;
unsigned long long int arr_2 [24] ;
unsigned int arr_6 [24] [24] ;
short arr_3 [24] ;
unsigned long long int arr_7 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (unsigned char)207;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 10991360727945345144ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? 2167459038U : 3942351312U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (short)5007 : (short)9709;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 2008939660188251950ULL : 9342251720225103578ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
