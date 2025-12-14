#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-9978;
int var_2 = 1213466807;
signed char var_5 = (signed char)108;
unsigned short var_9 = (unsigned short)55780;
unsigned long long int var_10 = 6784425007001140288ULL;
unsigned long long int var_14 = 1088957186340461931ULL;
unsigned long long int var_17 = 1414037199545880936ULL;
int zero = 0;
unsigned int var_20 = 3540489228U;
long long int var_21 = -6815099937861137538LL;
int var_22 = -632259358;
unsigned int arr_6 [15] [15] ;
signed char arr_7 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_6 [i_0] [i_1] = 3972169960U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = (signed char)46;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
