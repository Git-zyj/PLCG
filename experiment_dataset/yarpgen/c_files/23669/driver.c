#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)192;
unsigned char var_2 = (unsigned char)115;
unsigned char var_4 = (unsigned char)0;
int var_8 = 1307903576;
unsigned int var_9 = 945795837U;
_Bool var_10 = (_Bool)1;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)1;
int var_14 = -520338653;
int zero = 0;
unsigned int var_16 = 1917146562U;
signed char var_17 = (signed char)96;
unsigned char var_18 = (unsigned char)68;
signed char var_19 = (signed char)-43;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 244895192U;
int arr_0 [16] ;
unsigned char arr_6 [15] ;
long long int arr_2 [16] ;
unsigned long long int arr_3 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? -982154683 : 858052362;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (unsigned char)136;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -3200578103778638543LL : 7245246455615936667LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? 881028542154289369ULL : 11901223530589270987ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
