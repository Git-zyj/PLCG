#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned char var_2 = (unsigned char)191;
signed char var_3 = (signed char)-9;
unsigned long long int var_4 = 3601291134328790532ULL;
signed char var_6 = (signed char)-87;
int var_9 = 57257850;
unsigned char var_10 = (unsigned char)132;
unsigned long long int var_11 = 17910604269826355457ULL;
signed char var_12 = (signed char)-66;
signed char var_14 = (signed char)-57;
int zero = 0;
unsigned char var_15 = (unsigned char)0;
unsigned long long int var_16 = 11017790342153628314ULL;
signed char var_17 = (signed char)48;
signed char var_18 = (signed char)-117;
unsigned int var_19 = 656337312U;
signed char var_20 = (signed char)21;
unsigned char arr_1 [24] ;
unsigned int arr_8 [25] ;
_Bool arr_10 [25] [25] ;
unsigned long long int arr_2 [24] ;
unsigned char arr_6 [25] ;
long long int arr_11 [25] ;
_Bool arr_12 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned char)18 : (unsigned char)227;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = 996847856U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_10 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 13449691050895019801ULL : 2678036042620789741ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (unsigned char)109;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_11 [i_0] = -7278651573984332381LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_12 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
