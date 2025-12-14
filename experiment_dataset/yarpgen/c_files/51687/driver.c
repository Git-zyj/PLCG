#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)3352;
long long int var_4 = 6524319938813464064LL;
signed char var_5 = (signed char)-3;
int zero = 0;
unsigned int var_18 = 2287760364U;
unsigned int var_19 = 148101622U;
unsigned short var_20 = (unsigned short)52206;
unsigned long long int var_21 = 5480366306107689390ULL;
unsigned long long int var_22 = 11033195145519274405ULL;
int var_23 = -80486047;
long long int arr_6 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? -6831901302311972850LL : -3655912551029353635LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
