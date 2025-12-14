#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 1442079646982598358ULL;
unsigned long long int var_3 = 9520270630364471347ULL;
_Bool var_5 = (_Bool)0;
unsigned short var_6 = (unsigned short)52587;
short var_7 = (short)-22168;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned char var_10 = (unsigned char)160;
unsigned long long int var_11 = 11452273638722330967ULL;
unsigned long long int var_12 = 17511715388934442346ULL;
unsigned short var_13 = (unsigned short)56249;
unsigned short var_14 = (unsigned short)14575;
long long int arr_5 [15] [15] ;
_Bool arr_7 [15] [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = -1840987158817725864LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
