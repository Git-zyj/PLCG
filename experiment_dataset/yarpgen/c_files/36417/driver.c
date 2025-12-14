#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-122;
signed char var_1 = (signed char)49;
long long int var_3 = 6877505578395923537LL;
unsigned short var_4 = (unsigned short)56690;
unsigned long long int var_5 = 15735881087799348230ULL;
int var_7 = 526345795;
unsigned short var_9 = (unsigned short)59523;
int zero = 0;
unsigned long long int var_10 = 13040699313245195279ULL;
int var_11 = -253953220;
int var_12 = 499328659;
unsigned short var_13 = (unsigned short)33934;
long long int var_14 = -6210562008483518406LL;
long long int var_15 = 9185478283220948878LL;
short var_16 = (short)24725;
_Bool arr_0 [10] ;
long long int arr_1 [10] [10] ;
short arr_2 [10] [10] ;
_Bool arr_3 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = 2801922572361657163LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-29095;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
