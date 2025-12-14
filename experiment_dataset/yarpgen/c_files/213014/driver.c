#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4177576190U;
unsigned int var_3 = 3195320348U;
unsigned long long int var_4 = 11548259802495900316ULL;
int var_5 = 1720345753;
_Bool var_6 = (_Bool)0;
long long int var_7 = 6401471687400156012LL;
short var_8 = (short)6091;
short var_9 = (short)28856;
unsigned char var_10 = (unsigned char)220;
int zero = 0;
signed char var_14 = (signed char)21;
signed char var_15 = (signed char)-31;
unsigned short var_16 = (unsigned short)29731;
unsigned char var_17 = (unsigned char)102;
short arr_0 [13] [13] ;
unsigned char arr_1 [13] ;
long long int arr_3 [13] ;
_Bool arr_4 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-31664;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (unsigned char)4;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? -4189613074919793053LL : -7719802230139909713LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
