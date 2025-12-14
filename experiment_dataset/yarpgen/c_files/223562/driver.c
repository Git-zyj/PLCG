#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4851625774487452440ULL;
int var_1 = 1316438144;
unsigned short var_2 = (unsigned short)41139;
unsigned int var_3 = 994903943U;
unsigned char var_5 = (unsigned char)236;
signed char var_7 = (signed char)-23;
int var_8 = 818736851;
int zero = 0;
signed char var_10 = (signed char)38;
unsigned char var_11 = (unsigned char)166;
signed char var_12 = (signed char)-30;
signed char var_13 = (signed char)75;
_Bool var_14 = (_Bool)0;
long long int arr_2 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = -2169947924433838409LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
