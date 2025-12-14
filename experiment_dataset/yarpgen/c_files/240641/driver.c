#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_12 = 2702753552U;
int zero = 0;
unsigned short var_13 = (unsigned short)45859;
int var_14 = 1677899747;
unsigned int var_15 = 2096113244U;
unsigned int var_16 = 4157329600U;
unsigned short var_17 = (unsigned short)30359;
unsigned short var_18 = (unsigned short)26141;
unsigned short arr_0 [22] ;
unsigned int arr_2 [22] ;
_Bool arr_4 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (unsigned short)3374;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = 176927464U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
