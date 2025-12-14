#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)2321;
int var_5 = 1963339566;
unsigned short var_8 = (unsigned short)59381;
int var_11 = 1039181351;
unsigned short var_12 = (unsigned short)26451;
int zero = 0;
int var_18 = 1632883775;
unsigned short var_19 = (unsigned short)23258;
unsigned short var_20 = (unsigned short)6223;
unsigned short var_21 = (unsigned short)20729;
int var_22 = -1642011084;
int arr_1 [24] ;
unsigned short arr_5 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = -2119703405;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned short)8040;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
