#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)68;
unsigned int var_10 = 492630476U;
short var_11 = (short)29319;
int var_12 = -485152016;
long long int var_13 = -7885800810322743806LL;
signed char var_14 = (signed char)-72;
signed char var_15 = (signed char)-59;
unsigned long long int var_17 = 14540874632973429831ULL;
int zero = 0;
int var_19 = 1158167627;
unsigned short var_20 = (unsigned short)31376;
long long int var_21 = 903126702660531511LL;
signed char var_22 = (signed char)76;
signed char var_23 = (signed char)-51;
unsigned int var_24 = 3154643564U;
int var_25 = -359033454;
signed char var_26 = (signed char)96;
int arr_1 [24] ;
_Bool arr_3 [24] [24] ;
signed char arr_4 [24] [24] [24] ;
signed char arr_5 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = -1352206538;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (signed char)84;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (signed char)76;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
