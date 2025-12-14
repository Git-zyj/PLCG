#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2038495812;
unsigned short var_1 = (unsigned short)52921;
unsigned short var_2 = (unsigned short)42264;
int var_3 = -1255605922;
unsigned int var_4 = 2445146206U;
long long int var_5 = 8784902817004460721LL;
_Bool var_6 = (_Bool)0;
int var_7 = -666560536;
long long int var_8 = -1948418550924166591LL;
int zero = 0;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)21;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)11794;
signed char var_15 = (signed char)67;
unsigned short var_16 = (unsigned short)16780;
int var_17 = 1012383852;
long long int var_18 = 8481340676183819720LL;
unsigned int var_19 = 3173591645U;
int var_20 = 1197303050;
int arr_15 [21] [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = -1024286750;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    hash(&seed, arr_15 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
