#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_1 = (signed char)-120;
unsigned char var_4 = (unsigned char)74;
_Bool var_5 = (_Bool)1;
unsigned long long int var_6 = 2999696841386893823ULL;
unsigned long long int var_7 = 16173752140373967174ULL;
_Bool var_8 = (_Bool)1;
long long int var_9 = 3953919384566170181LL;
int var_12 = 2034633395;
unsigned long long int var_13 = 3008557692726400934ULL;
unsigned long long int var_16 = 17780266865947639855ULL;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)110;
_Bool var_19 = (_Bool)0;
short var_20 = (short)15870;
long long int var_21 = -3390288844055481317LL;
signed char var_22 = (signed char)20;
int var_23 = -690415880;
_Bool var_24 = (_Bool)0;
short var_25 = (short)13784;
unsigned int arr_0 [12] ;
int arr_1 [12] ;
unsigned long long int arr_4 [12] [12] [12] ;
unsigned long long int arr_5 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 851463842U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? -848150652 : 484253280;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 4222909428269667488ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 16702127367573897664ULL : 6370479076727397431ULL;
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
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
