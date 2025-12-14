#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_1 = 2771544409U;
unsigned short var_2 = (unsigned short)25462;
int var_3 = -1419251434;
unsigned int var_4 = 2716341735U;
unsigned int var_5 = 3931750740U;
unsigned short var_6 = (unsigned short)63375;
unsigned char var_7 = (unsigned char)161;
_Bool var_8 = (_Bool)0;
long long int var_9 = 7028082216081179959LL;
unsigned char var_10 = (unsigned char)99;
int zero = 0;
int var_11 = 1927183107;
unsigned long long int var_12 = 3390756650931600328ULL;
long long int var_13 = 409194157376890284LL;
int arr_3 [18] ;
unsigned long long int arr_4 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 1191488917 : -747022933;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 3906108497548521497ULL : 15127156974580632039ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
