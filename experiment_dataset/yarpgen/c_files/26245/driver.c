#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12115403749409270831ULL;
long long int var_2 = -5245158188082274527LL;
int var_3 = 405319657;
unsigned short var_4 = (unsigned short)46964;
long long int var_5 = 3219121718360087410LL;
unsigned int var_6 = 215271708U;
short var_7 = (short)2398;
signed char var_8 = (signed char)124;
signed char var_9 = (signed char)94;
short var_10 = (short)-12438;
int zero = 0;
unsigned char var_11 = (unsigned char)244;
unsigned int var_12 = 2753728683U;
long long int var_13 = 7328190245597163643LL;
long long int arr_1 [16] [16] ;
unsigned char arr_2 [16] [16] ;
long long int arr_3 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = -6486457456947061613LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)122;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = -2117864905910277940LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
