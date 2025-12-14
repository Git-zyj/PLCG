#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-84;
int var_6 = -828761885;
short var_7 = (short)-15766;
unsigned long long int var_9 = 2496645687926427912ULL;
unsigned long long int var_10 = 12487628267777827815ULL;
signed char var_11 = (signed char)76;
short var_13 = (short)19322;
int zero = 0;
unsigned long long int var_14 = 13665039059170533457ULL;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 9167905644984938190ULL;
short var_17 = (short)243;
unsigned int var_18 = 2603112249U;
signed char var_19 = (signed char)82;
short arr_0 [22] ;
unsigned char arr_1 [22] ;
unsigned long long int arr_3 [20] [20] ;
short arr_2 [22] [22] ;
_Bool arr_6 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (short)20582;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (unsigned char)154;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? 890733088304701493ULL : 4120936631012535378ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-616;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
