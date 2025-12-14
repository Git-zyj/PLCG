#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 12272145008919502121ULL;
_Bool var_4 = (_Bool)1;
signed char var_5 = (signed char)-3;
unsigned long long int var_6 = 8369826393997268950ULL;
unsigned char var_10 = (unsigned char)80;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 254490169U;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned long long int var_18 = 7260944439161377765ULL;
unsigned long long int var_19 = 16127106973527045373ULL;
unsigned int var_20 = 472623859U;
_Bool var_21 = (_Bool)0;
unsigned int arr_2 [20] ;
unsigned char arr_3 [20] ;
_Bool arr_5 [20] [20] ;
short arr_6 [20] ;
unsigned int arr_7 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = 3508520020U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (unsigned char)172;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (short)-21847;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? 2521411725U : 27083352U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
