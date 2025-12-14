#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1520487784U;
unsigned long long int var_1 = 12428861009863123377ULL;
_Bool var_4 = (_Bool)1;
_Bool var_8 = (_Bool)1;
long long int var_9 = 5796045485625238763LL;
unsigned long long int var_10 = 4828379105746451559ULL;
long long int var_12 = -1241180127710728046LL;
int zero = 0;
signed char var_14 = (signed char)57;
long long int var_15 = 1823003961877236297LL;
unsigned char var_16 = (unsigned char)22;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)31829;
unsigned char arr_0 [22] [22] ;
_Bool arr_2 [22] ;
long long int arr_3 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)178;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = 6221699472633494556LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
