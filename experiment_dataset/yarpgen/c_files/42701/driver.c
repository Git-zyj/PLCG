#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_2 = 795970552;
_Bool var_3 = (_Bool)0;
_Bool var_5 = (_Bool)1;
short var_8 = (short)-3498;
_Bool var_9 = (_Bool)0;
_Bool var_12 = (_Bool)1;
signed char var_14 = (signed char)4;
int zero = 0;
_Bool var_18 = (_Bool)1;
int var_19 = -726380832;
signed char var_20 = (signed char)-102;
unsigned short var_21 = (unsigned short)12576;
signed char var_22 = (signed char)28;
unsigned long long int var_23 = 13643615399130034306ULL;
signed char var_24 = (signed char)40;
unsigned long long int var_25 = 53815121099433716ULL;
unsigned short var_26 = (unsigned short)22785;
unsigned long long int arr_0 [21] ;
signed char arr_7 [12] [12] ;
unsigned int arr_8 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 13175156519928963918ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)-66;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = 1635978454U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
