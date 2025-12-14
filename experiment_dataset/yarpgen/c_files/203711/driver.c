#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -352658815;
int var_1 = -317569643;
_Bool var_2 = (_Bool)0;
unsigned int var_4 = 1607649847U;
unsigned char var_6 = (unsigned char)160;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 2761053864U;
unsigned short var_10 = (unsigned short)26338;
unsigned short var_11 = (unsigned short)65405;
unsigned char var_13 = (unsigned char)140;
signed char var_14 = (signed char)-63;
int zero = 0;
unsigned long long int var_20 = 4882783566111585961ULL;
_Bool var_21 = (_Bool)1;
long long int var_22 = -2540186590337701054LL;
unsigned int var_23 = 210047536U;
unsigned char var_24 = (unsigned char)153;
unsigned char var_25 = (unsigned char)197;
unsigned int var_26 = 2959849484U;
unsigned int arr_2 [24] ;
long long int arr_5 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 509521942U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_5 [i_0] [i_1] = 6666869095300314434LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
