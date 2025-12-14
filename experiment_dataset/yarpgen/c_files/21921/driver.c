#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned char var_8 = (unsigned char)86;
int var_10 = 861171057;
long long int var_13 = -8653170938840552195LL;
unsigned short var_16 = (unsigned short)24287;
int var_18 = -1677914235;
int zero = 0;
int var_19 = -1229014747;
unsigned long long int var_20 = 14169162880565320138ULL;
unsigned short var_21 = (unsigned short)25974;
signed char var_22 = (signed char)81;
unsigned long long int var_23 = 16830265554647710907ULL;
_Bool arr_0 [16] ;
unsigned char arr_1 [16] [16] ;
_Bool arr_2 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)70;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
