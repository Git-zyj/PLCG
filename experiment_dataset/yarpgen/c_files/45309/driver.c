#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)197;
unsigned short var_2 = (unsigned short)9289;
unsigned int var_5 = 1976673310U;
unsigned char var_6 = (unsigned char)101;
int var_7 = 1779874105;
short var_9 = (short)16702;
unsigned short var_10 = (unsigned short)58763;
unsigned int var_11 = 2423828330U;
_Bool var_16 = (_Bool)1;
int var_18 = -1282142395;
int zero = 0;
short var_19 = (short)-26590;
long long int var_20 = 2638649933309659471LL;
unsigned char var_21 = (unsigned char)121;
signed char var_22 = (signed char)-31;
unsigned short var_23 = (unsigned short)53212;
int arr_6 [20] ;
_Bool arr_7 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = 133749332;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_7 [i_0] [i_1] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
