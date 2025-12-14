#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1196578455536544616LL;
short var_2 = (short)-31729;
unsigned long long int var_4 = 17756239154880888161ULL;
signed char var_7 = (signed char)-49;
long long int var_9 = 1811022250281724441LL;
unsigned short var_11 = (unsigned short)13357;
unsigned int var_13 = 1424373576U;
_Bool var_14 = (_Bool)1;
int zero = 0;
long long int var_15 = -2029773003312802737LL;
short var_16 = (short)-11510;
long long int var_17 = -8936233475955905451LL;
unsigned int var_18 = 3889366477U;
unsigned long long int var_19 = 9808969614870704094ULL;
unsigned int var_20 = 3678715157U;
signed char var_21 = (signed char)33;
unsigned char var_22 = (unsigned char)22;
unsigned char var_23 = (unsigned char)186;
unsigned short var_24 = (unsigned short)55199;
_Bool var_25 = (_Bool)0;
_Bool arr_1 [12] ;
unsigned long long int arr_2 [12] ;
unsigned int arr_5 [18] ;
unsigned int arr_10 [18] [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 4487126938084433031ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = 475958370U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = 1706010288U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    hash(&seed, arr_10 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
