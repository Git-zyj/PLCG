#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)12;
_Bool var_7 = (_Bool)0;
signed char var_9 = (signed char)-15;
unsigned int var_11 = 2886257985U;
unsigned long long int var_12 = 16145722241536487882ULL;
unsigned char var_13 = (unsigned char)148;
long long int var_14 = 1731418544161648923LL;
int zero = 0;
unsigned char var_17 = (unsigned char)176;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)-47;
unsigned int var_20 = 2980513744U;
unsigned int var_21 = 1584645353U;
unsigned short var_22 = (unsigned short)52032;
unsigned int arr_5 [24] ;
_Bool arr_6 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = 960614347U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_17);
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
