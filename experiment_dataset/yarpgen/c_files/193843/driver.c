#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)25443;
signed char var_1 = (signed char)114;
int var_2 = -1827461298;
unsigned short var_4 = (unsigned short)38059;
long long int var_5 = 3717965364838385187LL;
int var_6 = 109942063;
signed char var_8 = (signed char)-117;
int var_9 = -973467268;
_Bool var_10 = (_Bool)0;
unsigned short var_11 = (unsigned short)61944;
unsigned short var_12 = (unsigned short)7472;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)-35;
int zero = 0;
long long int var_18 = -6882510579957068258LL;
signed char var_19 = (signed char)98;
unsigned int var_20 = 732300647U;
unsigned int var_21 = 1623615268U;
signed char var_22 = (signed char)-19;
signed char arr_2 [24] [24] ;
signed char arr_4 [13] ;
unsigned int arr_3 [24] ;
short arr_6 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-39;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (signed char)61;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = 4094863249U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = (short)-11215;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
