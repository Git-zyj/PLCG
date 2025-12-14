#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)17;
signed char var_7 = (signed char)-104;
unsigned char var_8 = (unsigned char)94;
long long int var_10 = 6048181833926940295LL;
unsigned int var_11 = 1661582337U;
unsigned int var_12 = 2028017857U;
short var_16 = (short)5040;
int zero = 0;
unsigned short var_17 = (unsigned short)3158;
unsigned int var_18 = 266239601U;
signed char var_19 = (signed char)-49;
long long int var_20 = 2960848440736916338LL;
signed char var_21 = (signed char)42;
unsigned char arr_1 [24] ;
unsigned short arr_2 [24] ;
signed char arr_5 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (unsigned char)101;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (unsigned short)4955;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (signed char)75;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
