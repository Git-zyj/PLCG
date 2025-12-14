#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_2 = (signed char)-123;
signed char var_4 = (signed char)95;
signed char var_5 = (signed char)33;
int var_9 = 1930089702;
short var_10 = (short)32629;
unsigned char var_15 = (unsigned char)154;
long long int var_16 = 7847957785511082196LL;
int zero = 0;
unsigned long long int var_20 = 11606681327793580237ULL;
signed char var_21 = (signed char)77;
long long int var_22 = 1167177520030985619LL;
unsigned char arr_3 [19] [19] ;
unsigned short arr_5 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)83;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (unsigned short)8001;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
